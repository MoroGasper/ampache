<?php 
/*

 Copyright (c) 2001 - 2006 Ampache.org
 All rights reserved.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
?>
<style type="text/css">
<!--
body { 
	margin:0px;
	background: #ffffff;
   font-family: Tahoma, Helvetica, Arial, sans-serif; 
   color: black;
  }

  a { 
    color: #333; 
	 text-decoration: none;
  }
  a:hover {
  	color: #000;
  }

  .text-box {
    padding-left:5px;
    padding-top:5px;
    margin-bottom:10px;
  }

table.border {
	padding-left: 5px;
	border: 1px solid #ccc;
	background-image: url(<?php echo conf('web_path'); ?>/themes/tangens/images/topbg.gif);
	background-repeat: repeat-x;
}

td {
	padding: 3px 10px 3px 10px;
}

th, tr.table-header td {
	padding: .1em 5px .1em 5px;
	border-bottom: 1px solid #00f;
	text-align: left;
	font-size: 1.2em;
	font-weight: normal;
}

  input	{
    font-weight: bold; 
    border-style: solid;
    border-width: 1px;
    border-color: #ccc; 
    margin: 2px 2px 2px 2px;
    padding: 2px;
  }
  input.smallbutton, input.button {
  	background: url(<?php echo conf('web_path'); ?>/themes/tangens/images/topbg.gif);
  }

  select { 
  }

  textarea { 
  }

  .table-header {
    vertical-align: top;
  }

/*************** Page Header *********************/
    #pageheader {
    }
/*************** END Page Header *****************/
    .navitem
    {
        vertical-align: top;
        text-align: center;
    }
    .header1 
    { 
	font-weight: 900;
    }
    .header2
    {
	font-weight: 900;
    }
    .active_navitem
    {
        vertical-align: top;
        text-align: center;
    }
	.headrow 
		{
		}
	.odd,.odd td
		{
/*		border-bottom: 1px solid #ccc;*/
		background-color: #f5f5f5;
		}
	.even,.even > td
		{
/*		border-bottom: 1px solid #ccc;*/
		}
    .blank
        {
        background: #fff;
        }
	.border 
		{ 
		}
	.header 
		{ 
		}
 	.error	
		{ 
		}
	.fatalerror
		{
		padding-top: 3px;
		padding-bottom: 3px;
		font-size: 1.1em;
		font-weight: 900;
		text-align: center;
		}
	.disabled
		{
		text-decoration: line-through;
		}
	.alphabet 
		{ 
		font-weight: normal; 
		font-size: .8em;
		}
		
#maincontainer
{
	margin: 0px;
}
#topbar
{
	height: 57px;
	padding-top: 0px;
	padding-left: 10px;
	background-color: #ffffff;
	background-image: url(<?php echo conf('web_path'); ?>/themes/tangens/images/topbg.gif);
	border: 0px solid #cccccc;
	border-bottom-width: 1px;
}
#topbarright
{
	float: right;
	font-size: .7em;
}
        #topbarleft
                {
                        float: left;
                }
        .nodisplay { display: none;}
        .display {}
        #mpdpl td {
                padding: 0px 2px 0px 2px;
                text-align: left;
                }
/**
 * End Div Definitions
 * This is the end of the main structure def's
 */

/**
 * Experimental for menus (Thx Sigger)
 * TO DO: Fill in 1px border around menus & submenu items
 * Make padding appply to the li, not just an a.  Moving paddng: to li throws off the dropdown menu alignment.
 */
#content {
	border: 1px solid #ccc;
	position: absolute;
	left: 205px;
	margin-right: 20px;
	top: 84px;
	z-index: 0;
	background-color: #f0f0f0;
	font-size: .9em;
}
#sidebar {
	height: 100%;
	position: absolute;
	left: 0px;
	top: 84px;
	padding: 0px;
	list-style: none;
	z-index: 1;
}
#sidebar ul {
	border: 1px solid #ccc;
	margin: 0px;
	list-style: none;
	font-family: verdana, arial, Helvetica, sans-serif;
	line-height: 1.0;
	background-color: #f0f0f0;
	padding-left: 0px;
	padding-top: 5px;
	padding-bottom: 5px;
	padding-right: 0px;
}
#sidebar li {
	margin: 0px;
	display: block;
	padding: .4em 5px 0em 15px;
	width: 170px;
}
#sidebar a, .navbutton {
   display: block;
   text-decoration: none;
	color: black;
	padding-left: 10px;
	padding-bottom: .3em;
	border-bottom: 1px solid #ccc;
}
#sidebar form {
	display: block;
}
	#sidebar a:hover {
		color: #000;
		font-weight: bold;
	}
#sidebar li:hover, #sidebar li.sfhover {
        background-color: #dddddd;
}
#sidebar li#active a{
	color: #000;
	border-bottom: 1px solid #00f;
}
#sidebar li ul {
	border: 1px solid #ccc;
	border-left: 1px solid #00f;
	position: absolute; /*      width: 9em;*/
	margin: -1em 0 0 150px; /* for vertical menu; comment out otherwise */
	left: -999em; /* this -999em puts the submenu item way off to the left until it's called back by a hover (below) */
}
    #sidebar li:hover ul, #sidebar li.sfhover ul {
		left: auto;  /* this calls the submenu back when the parent li is hovered. */
    }
-->
</style>
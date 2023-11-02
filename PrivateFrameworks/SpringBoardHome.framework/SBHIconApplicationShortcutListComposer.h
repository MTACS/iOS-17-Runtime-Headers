
@interface SBHIconApplicationShortcutListComposer : NSObject

+ (id)composedShortcutsForApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 staticItems:(id)arg3 dynamicItems:(id)arg4 applicationItemID:(unsigned long long)arg5 numberOfDisplayItemsInSwitcher:(long long)arg6 supportsMultipleWindows:(bool)arg7 isSystemApplication:(bool)arg8 isInternalApplication:(bool)arg9 isApplicationInBeta:(bool)arg10 isApplicationHidden:(bool)arg11 iconManagerAllowsEditing:(bool)arg12 removeStyle:(long long)arg13;
+ (id)composedShortcutsForBookmarkIcon:(id)arg1 withDisplayName:(id)arg2 iconManagerAllowsEditing:(bool)arg3 removeStyle:(long long)arg4;
+ (id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 applicationItemID:(unsigned long long)arg3 canModifyDownloadState:(bool)arg4 prioritizationIsAvailable:(bool)arg5 downloadingInformationAgent:(id)arg6 iconManagerAllowsEditing:(bool)arg7 removeStyle:(long long)arg8 canShare:(bool)arg9;
+ (id)composedShortcutsForFolderIcon:(id)arg1 iconImageCache:(id)arg2 iconManagerAllowsEditing:(bool)arg3 removeStyle:(long long)arg4 badgeViewGenerator:(id /* block */)arg5;
+ (id)composedShortcutsForWidgetIcon:(id)arg1 additionalApplicationShortcutItems:(id)arg2 widgetIconSupportsConfiguration:(bool)arg3 iconManagerAllowsEditing:(bool)arg4 widgetSettings:(id)arg5;
+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;
+ (id)homeScreenDefaults;
+ (bool)supportsMultiwindowShortcut;

@end

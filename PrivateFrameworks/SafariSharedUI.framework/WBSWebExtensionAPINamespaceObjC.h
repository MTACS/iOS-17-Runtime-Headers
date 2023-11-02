
@interface WBSWebExtensionAPINamespaceObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIActionObjC * _action;
    WBSWebExtensionAPIAlarmsObjC * _alarms;
    WBSWebExtensionAPIActionObjC * _browserAction;
    WBSWebExtensionAPICommandsObjC * _commands;
    WBSWebExtensionAPIContextMenusObjC * _contextMenus;
    WBSWebExtensionAPICookiesObjC * _cookies;
    WBSWebExtensionAPIDeclarativeNetRequestObjC * _declarativeNetRequest;
    WBSWebExtensionAPIExtensionObjC * _extension;
    WBSWebExtensionAPILocalizationObjC * _i18n;
    WBSWebExtensionAPINotificationsObjC * _notifications;
    WBSWebExtensionAPIActionObjC * _pageAction;
    WBSWebExtensionAPIPermissionsObjC * _permissions;
    WBSWebExtensionAPIRuntimeObjC * _runtime;
    WBSWebExtensionAPIScriptingObjC * _scripting;
    WBSWebExtensionAPIStorageObjC * _storage;
    WBSWebExtensionAPITabsObjC * _tabs;
    WBSWebExtensionAPIWebNavigationObjC * _webNavigation;
    WBSWebExtensionAPIWebRequestObjC * _webRequest;
    WBSWebExtensionAPIWindowsObjC * _windows;
}

@property (nonatomic, readonly) WBSWebExtensionAPIRuntimeObjC *runtime;

- (void).cxx_destruct;
- (id)runtime;

@end

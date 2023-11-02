
@interface WBSWebExtensionAPIRuntimeObjC : WBSWebExtensionAPIRuntimeBase {
    WBSWebExtensionAPIEventObjC * _onConnect;
    WBSWebExtensionAPIEventObjC * _onConnectExternal;
    WBSWebExtensionAPIEventObjC * _onInstalled;
    WBSWebExtensionAPIEventObjC * _onMessage;
    WBSWebExtensionAPIEventObjC * _onMessageExternal;
    WBSWebExtensionAPIEventObjC * _onStartup;
}

- (void).cxx_destruct;

@end

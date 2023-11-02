
@interface WBSWebExtensionAPIPortObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue> {
    WKWebProcessPlugInBrowserContextController * _browserContextController;
    NSUUID * _identifier;
    bool  _isDisconnected;
    NSString * _name;
    WBSWebExtensionAPIEventObjC * _onDisconnect;
    WBSWebExtensionAPIEventObjC * _onMessage;
    NSDictionary * _sender;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (struct OpaqueJSValue { }*)translateToJSValueWithJSContext:(struct OpaqueJSContext { }*)arg1;

@end

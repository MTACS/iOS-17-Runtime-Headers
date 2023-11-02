
@interface WBSWebExtensionAPIObject : NSObject {
    NSUUID * _extensionIdentifier;
    bool  _isForMainWorld;
    WBSWebExtensionAPIRuntimeBase * _runtime;
}

@property (nonatomic, readonly) WBSWebExtensionAPIRuntimeBase *runtime;

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(bool)arg3;
- (id)runtime;

@end

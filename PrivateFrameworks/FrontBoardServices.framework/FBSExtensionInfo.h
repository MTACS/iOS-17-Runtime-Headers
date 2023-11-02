
@interface FBSExtensionInfo : FBSBundleInfo {
    NSString * _extensionIdentifier;
    NSString * _typeIdentifier;
}

@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithPlugInKitProxy:(id)arg1;
- (id)extensionIdentifier;
- (id)typeIdentifier;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (long long)sb_type;

@end

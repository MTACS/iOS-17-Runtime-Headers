
@interface WBSBundleWebExtensionBrowsingContext : NSObject {
    WKBrowsingContextHandle * _browsingContextHandle;
    NSNumber * _tabID;
    NSNumber * _windowID;
}

@property (nonatomic, readonly) WKBrowsingContextHandle *browsingContextHandle;
@property (nonatomic, readonly) NSNumber *tabID;
@property (nonatomic, readonly) NSNumber *windowID;

- (void).cxx_destruct;
- (id)browsingContextHandle;
- (id)initWithBrowingContextHandle:(id)arg1 tabID:(id)arg2 windowID:(id)arg3;
- (id)tabID;
- (id)windowID;

@end

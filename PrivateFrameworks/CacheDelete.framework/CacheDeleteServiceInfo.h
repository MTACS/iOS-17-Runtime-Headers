
@interface CacheDeleteServiceInfo : NSObject {
    bool  _doNotQuery;
    NSExtensionContext * _extensionContext;
}

@property bool doNotQuery;
@property (nonatomic, readonly) NSExtensionContext *extensionContext;

+ (id)serviceInfoWithExtensionContext:(id)arg1;

- (void).cxx_destruct;
- (bool)doNotQuery;
- (id)extensionContext;
- (id)initWithExtensionContext:(id)arg1;
- (void)setDoNotQuery:(bool)arg1;

@end

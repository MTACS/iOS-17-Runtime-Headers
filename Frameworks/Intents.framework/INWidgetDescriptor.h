
@interface INWidgetDescriptor : NSObject {
    NSString * _extensionBundleIdentifier;
    NSString * _intentClassName;
    NSString * _kind;
    long long  _preferredSizeClass;
}

@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *intentClassName;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) long long preferredSizeClass;

- (void).cxx_destruct;
- (id)_extensionRecordWithError:(id*)arg1;
- (id)description;
- (id)extensionBundleIdentifier;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 intentClassName:(id)arg3 preferredSizeClass:(long long)arg4;
- (id)intentClassName;
- (id)kind;
- (struct CGSize { double x1; double x2; })preferredSize;
- (long long)preferredSizeClass;
- (bool)supportsIntent:(id)arg1;

@end

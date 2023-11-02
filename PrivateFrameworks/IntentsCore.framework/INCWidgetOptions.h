
@interface INCWidgetOptions : NSObject {
    NSString * _extensionBundleIdentifier;
    NSString * _intentType;
}

@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, copy) NSString *intentType;

- (void).cxx_destruct;
- (id)extensionBundleIdentifier;
- (id)initWithExtensionBundleIdentifier:(id)arg1 intentType:(id)arg2;
- (id)intentType;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setIntentType:(id)arg1;

@end


@interface PUEditPlugin : NSObject {
    UIApplicationExtensionActivity * _applicationExtensionActivity;
    unsigned long long  _category;
    NSExtension * _extension;
}

@property (nonatomic, readonly) UIApplicationExtensionActivity *applicationExtensionActivity;
@property (nonatomic) unsigned long long category;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) UIImage *smallIcon;
@property (nonatomic, readonly) NSString *title;

+ (id)pu_defaultMarkupExtensionIdentifier;
+ (bool)pu_isMarkupExtensionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)applicationExtensionActivity;
- (unsigned long long)category;
- (id)extension;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithExtension:(id)arg1 pluginCategoryType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)pu_isMarkupExtension;
- (void)setCategory:(unsigned long long)arg1;
- (id)smallIcon;
- (id)title;

@end

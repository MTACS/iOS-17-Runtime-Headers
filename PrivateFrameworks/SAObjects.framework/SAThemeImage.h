
@interface SAThemeImage : SADomainObject

@property (nonatomic, copy) NSString *appearanceSetting;
@property (nonatomic, copy) NSData *dynamicImage;

+ (id)themeImage;
+ (id)themeImageWithDictionary:(id)arg1 context:(id)arg2;

- (id)appearanceSetting;
- (id)dynamicImage;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAppearanceSetting:(id)arg1;
- (void)setDynamicImage:(id)arg1;

@end

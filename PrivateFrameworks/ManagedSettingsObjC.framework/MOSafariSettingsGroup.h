
@interface MOSafariSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSString *cookiePolicy;
@property (nonatomic, retain) NSNumber *denyAutoFill;

+ (id)cookiePolicyMetadata;
+ (id)denyAutoFillMetadata;
+ (id)groupName;

- (id)cookiePolicy;
- (id)denyAutoFill;
- (void)setCookiePolicy:(id)arg1;
- (void)setDenyAutoFill:(id)arg1;

@end

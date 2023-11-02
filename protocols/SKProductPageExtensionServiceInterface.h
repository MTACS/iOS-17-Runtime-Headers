
@protocol SKProductPageExtensionServiceInterface <NSObject>

@required

- (void)_setAskToBuy:(bool)arg1;
- (void)_setCancelButtonTitle:(NSString *)arg1;
- (void)_setPromptString:(NSString *)arg1;
- (void)_setRightBarButtonTitle:(NSString *)arg1;
- (void)_setShowsRightBarButton:(bool)arg1;
- (void)_setShowsStoreButton:(bool)arg1;
- (void)_setUsageContext:(NSString *)arg1;
- (void)_setupWithClientBundleID:(NSString *)arg1 bagType:(long long)arg2;
- (void)clientLookupItemDidLoad:(AMSLookupItem *)arg1 parameters:(NSDictionary *)arg2;
- (void)setPreview:(NSNumber *)arg1;
- (void)setVisibleInClientWindow:(NSNumber *)arg1;

@end

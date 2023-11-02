
@protocol CNFoundationUserDefaults <NSObject>

@required

- (NSString *)countryCode;
- (NSDictionary *)filteredAccountsAndContainers;
- (bool)isShortNameFormatEnabled;
- (unsigned long long)nameOrder;
- (unsigned long long)newContactNameOrder;
- (bool)preferNickname;
- (void)setFilteredAccountsAndContainers:(NSDictionary *)arg1;
- (void)setNameOrder:(unsigned long long)arg1;
- (void)setPreferNickname:(bool)arg1;
- (void)setShortNameFormat:(unsigned long long)arg1;
- (void)setShortNameFormatEnabled:(bool)arg1;
- (unsigned long long)shortNameFormat;
- (unsigned long long)sortOrder;

@end

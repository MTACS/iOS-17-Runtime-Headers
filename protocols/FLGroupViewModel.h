
@protocol FLGroupViewModel <NSObject>

@required

- (NSString *)accountID;
- (NSString *)footerText;
- (NSString *)groupTitle;
- (NSString *)identifier;
- (NSArray *)items;
- (bool)needsAccountID;
- (bool)restrictionEnabled;
- (NSString *)rowTitle;
- (bool)shouldCoalesceItems;
- (NSString *)subtitleText;

@end

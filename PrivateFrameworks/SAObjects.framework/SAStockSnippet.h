
@interface SAStockSnippet : SAUISnippet

@property (nonatomic, retain) SAUIAppPunchOut *appPunchOut;
@property (nonatomic, copy) NSArray *stocks;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)appPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAppPunchOut:(id)arg1;
- (void)setStocks:(id)arg1;
- (id)stocks;

@end

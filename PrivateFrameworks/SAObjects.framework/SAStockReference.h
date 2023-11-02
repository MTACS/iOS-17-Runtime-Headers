
@interface SAStockReference : SADomainObject

@property (nonatomic, copy) NSString *companyName;
@property (nonatomic, copy) NSString *symbol;

+ (id)reference;
+ (id)referenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)companyName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCompanyName:(id)arg1;
- (void)setSymbol:(id)arg1;
- (id)symbol;

@end

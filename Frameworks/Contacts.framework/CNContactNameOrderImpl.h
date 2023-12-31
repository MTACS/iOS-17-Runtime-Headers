
@interface CNContactNameOrderImpl : NSObject

+ (id)defaultNewContactOrder;
+ (id)defaultOrder;
+ (id)defaultSortOrder;
+ (id)familyNameFirstOrder;
+ (id)givenNameFirstOrder;
+ (id)orderForSortOrder:(long long)arg1;

- (long long)nameOrder;
- (id)nameProperties;
- (id)phoneticNameProperties;
- (id)sortingNameProperties;

@end

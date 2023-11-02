
@interface SAAbstractItemList : SADomainObject

@property (nonatomic, copy) NSArray *domainObjects;
@property (nonatomic, copy) NSNumber *selectedIndex;

+ (id)abstractItemList;
+ (id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjects;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)selectedIndex;
- (void)setDomainObjects:(id)arg1;
- (void)setSelectedIndex:(id)arg1;

@end

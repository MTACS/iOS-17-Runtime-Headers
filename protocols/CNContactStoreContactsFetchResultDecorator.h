
@protocol CNContactStoreContactsFetchResultDecorator <CNContactStoreContactsFetchResult>

@required

+ (<CNKeyDescriptor> *)descriptorForRequiredKeys;

- (NSArray *)decoratedValue;
- (id)initWithContacts:(NSArray *)arg1 keysToFetch:(NSArray *)arg2 unifyContactsFromMainStore:(bool)arg3;
- (id)initWithContactsFetchResult:(CNContactStoreContactsFetchResult *)arg1 keysToFetch:(NSArray *)arg2 unifyContactsFromMainStore:(bool)arg3;

@end

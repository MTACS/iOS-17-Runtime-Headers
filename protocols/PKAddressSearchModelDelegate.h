
@protocol PKAddressSearchModelDelegate <NSObject>

@optional

- (void)contactsSearchUpdated:(PKAddressSearchModel *)arg1;
- (void)mapSearchUpdated:(PKAddressSearchModel *)arg1;
- (void)recentsSearchUpdated:(PKAddressSearchModel *)arg1;
- (void)selectedAddress:(CNContact *)arg1 withError:(NSError *)arg2;
- (void)suggestedSearchUpdated:(PKAddressSearchModel *)arg1;

@end

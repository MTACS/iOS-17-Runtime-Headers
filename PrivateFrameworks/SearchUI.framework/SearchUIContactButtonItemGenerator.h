
@interface SearchUIContactButtonItemGenerator : SearchUIButtonItemGenerator

- (id)audioCallButtonItemsForString:(id)arg1 isPhoneNumber:(bool)arg2;
- (id)buttonItemWithSymbol:(id)arg1 title:(id)arg2 command:(id)arg3;
- (id)dialRequestWithProvider:(id)arg1 destination:(id)arg2 isPhoneNumber:(bool)arg3;
- (bool)facetimeAvailable;
- (void)generateSearchUIButtonItemsWithSFButtonItem:(id)arg1 completion:(id /* block */)arg2;
- (id)videoCallButtonItemForString:(id)arg1 isPhoneNumber:(bool)arg2;

@end

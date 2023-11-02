
@protocol SGJournalContactsObserver <SGJournalBaseObserver>

@required

- (void)addContact:(SGStorageContact *)arg1;
- (void)confirmContact:(SGStorageContact *)arg1;
- (void)rejectContact:(SGStorageContact *)arg1;
- (void)removeAllStoredPseudoContacts;

@end

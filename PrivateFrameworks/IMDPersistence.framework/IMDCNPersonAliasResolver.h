
@interface IMDCNPersonAliasResolver : NSObject {
    NSMutableDictionary * _aliasToCNIDMap;
    CNContactStore * _contactStore;
    IMDContactStoreChangeHistoryEventsHandler * _contactsEventhandler;
    NSData * _currentHistoryToken;
}

@property (nonatomic, retain) NSMutableDictionary *aliasToCNIDMap;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) IMDContactStoreChangeHistoryEventsHandler *contactsEventhandler;
@property (nonatomic, retain) NSData *currentHistoryToken;

- (void).cxx_destruct;
- (void)CNRecordIDForAliases:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_batchFetchContactRecordIDForAliases:(id)arg1;
- (id)_fetchAliasToCNIDMapForAliases:(id)arg1;
- (id)_fetchContactIdentifierForAlias:(id)arg1;
- (id)_predicateForAlias:(id)arg1;
- (id)_predicateForEmailAddress:(id)arg1;
- (id)_predicateForPhoneNumber:(id)arg1;
- (id)_updateAliasToCNIDMap:(id)arg1 withHistoryToken:(id)arg2;
- (id)aliasToCNIDMap;
- (id)contactStore;
- (id)contactsEventhandler;
- (id)currentHistoryToken;
- (id)init;
- (bool)isCNContactFavorited:(id)arg1;
- (bool)isFavoritedContact:(id)arg1;
- (void)setAliasToCNIDMap:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactsEventhandler:(id)arg1;
- (void)setCurrentHistoryToken:(id)arg1;

@end

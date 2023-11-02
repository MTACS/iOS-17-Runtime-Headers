
@interface DAContainerProvider : NSObject

+ (id)providerWithAddressBook:(void*)arg1;
+ (id)providerWithContactStore:(id)arg1;

- (id)allContainers;
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(bool)arg6 propertiesReadonly:(bool)arg7 forAccount:(id)arg8;
- (void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(bool)arg2;
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(bool)arg3;
- (bool)setLastSyncDateForContainer:(id)arg1;

@end

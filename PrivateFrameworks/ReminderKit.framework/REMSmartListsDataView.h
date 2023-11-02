
@interface REMSmartListsDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

+ (id)smartListsFromSmartListStorages:(id)arg1 accountStorages:(id)arg2 parentListStorages:(id)arg3 store:(id)arg4;

- (void).cxx_destruct;
- (id)fetchCustomSmartListWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchCustomSmartListsInAccount:(id)arg1 error:(id*)arg2;
- (id)fetchCustomSmartListsInGroup:(id)arg1 error:(id*)arg2;
- (id)fetchCustomSmartListsWithError:(id*)arg1;
- (id)fetchNonCustomSmartListWithSmartListType:(id)arg1 createIfNeeded:(bool)arg2 error:(id*)arg3;
- (id)initWithStore:(id)arg1;
- (id)store;

@end

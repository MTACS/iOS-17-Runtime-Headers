
@interface REMSmartListSectionsDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchSmartListSectionWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchSmartListSectionsInSmartList:(id)arg1 error:(id*)arg2;
- (id)fetchSmartListSectionsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)initWithStore:(id)arg1;
- (id)smartListSectionsFromAccountStorages:(id)arg1 smartListStorages:(id)arg2 groupStorages:(id)arg3 smartListSectionStorages:(id)arg4 store:(id)arg5;
- (id)store;

@end

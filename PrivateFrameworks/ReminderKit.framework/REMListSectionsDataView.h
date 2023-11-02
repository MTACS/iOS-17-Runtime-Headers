
@interface REMListSectionsDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)fetchListSectionWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsCountWithListObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsInList:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsWithListObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListSectionsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)initWithStore:(id)arg1;
- (id)listSectionsFromAccountStorages:(id)arg1 listStorages:(id)arg2 listSectionStorages:(id)arg3 store:(id)arg4;
- (id)store;

@end

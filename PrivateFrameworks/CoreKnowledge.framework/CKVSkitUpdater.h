
@interface CKVSkitUpdater : NSObject {
    unsigned long long  _deleteCount;
    unsigned long long  _insertCount;
    CKVLocalization * _localization;
    NSString * _originAppId;
    NSObject<KVSkitWriteAccess> * _skit;
}

@property (nonatomic, readonly) unsigned long long deleteCount;
@property (nonatomic, readonly) unsigned long long insertCount;

- (void).cxx_destruct;
- (unsigned long long)deleteCount;
- (bool)deleteItemWithRecordId:(id)arg1;
- (id)init;
- (id)initWithWriteAccess:(id)arg1 settings:(id)arg2 originAppId:(id)arg3 itemType:(long long)arg4;
- (unsigned long long)insertCount;
- (bool)insertItem:(id)arg1 recordId:(id)arg2;
- (bool)setLocale;

@end


@interface HDCloudSyncTarget : NSObject <NSCopying> {
    CKContainer * _container;
    unsigned long long  _options;
    long long  _purpose;
    HDCloudSyncStore * _store;
    HDCloudSyncStoreRecord * _storeRecord;
    HDCloudSyncZone * _zone;
    HDCloudSyncZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long purpose;
@property (nonatomic, readonly) HDCloudSyncStore *store;
@property (nonatomic, readonly) HDCloudSyncStoreRecord *storeRecord;
@property (nonatomic, retain) HDCloudSyncZone *zone;
@property (nonatomic, readonly) HDCloudSyncZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPurpose:(long long)arg1 container:(id)arg2 zoneIdentifier:(id)arg3 storeRecord:(id)arg4 store:(id)arg5 options:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (long long)purpose;
- (void)setZone:(id)arg1;
- (id)store;
- (id)storeRecord;
- (id)targetByAddingOptions:(unsigned long long)arg1;
- (id)targetByRemovingOptions:(unsigned long long)arg1;
- (id)targetByUpdatingPurpose:(long long)arg1;
- (id)zone;
- (id)zoneIdentifier;

@end

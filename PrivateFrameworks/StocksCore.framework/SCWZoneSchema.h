
@interface SCWZoneSchema : NSObject {
    bool  _atomic;
    NSArray * _recordSchemas;
    unsigned long long  _version;
    CKRecordZoneID * _zoneID;
    NSString * _zoneName;
}

@property (nonatomic, readonly, copy) NSArray *allRecordFieldNames;
@property (getter=isAtomic, nonatomic, readonly) bool atomic;
@property (nonatomic, copy) NSArray *recordSchemas;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;
@property (nonatomic, readonly, copy) NSString *zoneName;

- (void).cxx_destruct;
- (id)allRecordFieldNames;
- (id)initWithName:(id)arg1 atomic:(bool)arg2 recordSchemas:(id)arg3;
- (id)initWithName:(id)arg1 atomic:(bool)arg2 version:(unsigned long long)arg3 recordSchemas:(id)arg4;
- (bool)isAtomic;
- (bool)isValidRecord:(id)arg1;
- (id)recordSchemas;
- (id)schemaForRecordType:(id)arg1;
- (void)setRecordSchemas:(id)arg1;
- (id)validateRecords:(id)arg1;
- (unsigned long long)version;
- (id)zoneID;
- (id)zoneName;

@end

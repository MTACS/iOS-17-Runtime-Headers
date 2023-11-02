
@interface SCKZoneSchema : NSObject {
    bool  _atomic;
    NSArray * _recordSchemas;
    CKRecordZoneID * _zoneID;
    NSString * _zoneName;
}

@property (nonatomic, readonly, copy) NSArray *allRecordFieldNames;
@property (getter=isAtomic, nonatomic, readonly) bool atomic;
@property (nonatomic, copy) NSArray *recordSchemas;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;
@property (nonatomic, readonly, copy) NSString *zoneName;

- (void).cxx_destruct;
- (id)allRecordFieldNames;
- (id)initWithName:(id)arg1 atomic:(bool)arg2 recordSchemas:(id)arg3;
- (bool)isAtomic;
- (bool)isValidRecord:(id)arg1;
- (id)recordSchemas;
- (id)schemaForRecordType:(id)arg1;
- (void)setRecordSchemas:(id)arg1;
- (id)validateRecords:(id)arg1;
- (id)zoneID;
- (id)zoneName;

@end

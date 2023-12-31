
@interface MSPEncryptedCloudRecord : NSObject <MSPCloudRecord> {
    bool  _compressNewData;
    CKRecord * _record;
}

@property (nonatomic, readonly) NSDate *cloudRecordModificationDate;
@property (nonatomic, readonly) NSString *cloudRecordName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecord *record;
@property (readonly) Class superclass;

+ (id)arrayOfCKRecordsFromArray:(id)arg1;
+ (id)arrayOfEncryptedRecordsFromArray:(id)arg1;

- (void).cxx_destruct;
- (id)cloudRecordModificationDate;
- (id)cloudRecordName;
- (id)description;
- (id)initWithCKRecord:(id)arg1 isNewlyCreatedRecord:(bool)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)record;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end

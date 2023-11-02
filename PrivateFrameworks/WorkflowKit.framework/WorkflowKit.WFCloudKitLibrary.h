
@interface WorkflowKit.WFCloudKitLibrary : NSObject <WFCloudKitItem> {
    void dataFileRepresentation;
    void identifier;
    void recordSystemFieldsData;
    void syncHash;
    void version;
}

@property (nonatomic, retain) WFFileRepresentation *dataFileRepresentation;
@property (nonatomic, retain) CKRecordID *identifier;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (nonatomic) long long syncHash;
@property (nonatomic, copy) NSString *version;

+ (id)properties;
+ (id)recordType;
+ (void)setProperties:(id)arg1;
+ (void)setRecordType:(id)arg1;

- (void).cxx_destruct;
- (id)dataFileRepresentation;
- (id)ensureFileAssets;
- (id)identifier;
- (id)init;
- (id)recordSystemFieldsData;
- (void)setDataFileRepresentation:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRecordSystemFieldsData:(id)arg1;
- (void)setSyncHash:(long long)arg1;
- (void)setVersion:(id)arg1;
- (long long)syncHash;
- (id)version;

@end

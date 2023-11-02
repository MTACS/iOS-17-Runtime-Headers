
@interface VCIntentDefinitionSyncState : MTLModel <MTLJSONSerializing> {
    NSDictionary * _applications;
    NSUUID * _databaseUUID;
    NSNumber * _sequenceNumber;
}

@property (nonatomic, copy) NSDictionary *applications;
@property (nonatomic, copy) NSUUID *databaseUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *sequenceNumber;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)applicationsJSONTransformer;

- (void).cxx_destruct;
- (id)applications;
- (id)databaseUUID;
- (id)sequenceNumber;
- (void)setApplications:(id)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (void)setSequenceNumber:(id)arg1;

@end

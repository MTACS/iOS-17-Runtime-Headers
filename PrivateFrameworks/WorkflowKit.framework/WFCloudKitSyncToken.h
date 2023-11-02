
@interface WFCloudKitSyncToken : WFRecord {
    NSString * _account;
    NSDate * _date;
    NSString * _identifier;
    NSData * _lastOrderingCloudKitRecordMetadata;
    NSData * _lastOrderingData;
    NSData * _serverChangeTokenData;
    NSData * _syncEngineMetadata;
    NSData * _syncFlagsCloudKitRecordMetadata;
}

@property (nonatomic, copy) NSString *account;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSOrderedSet *lastOrdering;
@property (nonatomic, copy) NSData *lastOrderingCloudKitRecordMetadata;
@property (nonatomic, copy) NSData *lastOrderingData;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic, copy) NSData *serverChangeTokenData;
@property (nonatomic, copy) NSData *syncEngineMetadata;
@property (nonatomic, copy) NSData *syncFlagsCloudKitRecordMetadata;

+ (id)accountForContainerEnvironmentString:(id)arg1 userRecordID:(id)arg2;
+ (id)defaultDate;
+ (id)defaultIdentifier;
+ (id)ignoredPropertyNames;

- (void).cxx_destruct;
- (id)account;
- (id)date;
- (id)identifier;
- (id)lastOrdering;
- (id)lastOrderingCloudKitRecordMetadata;
- (id)lastOrderingData;
- (id)newTokenWithCopiedPayload;
- (id)serverChangeToken;
- (id)serverChangeTokenData;
- (void)setAccount:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastOrdering:(id)arg1;
- (void)setLastOrderingCloudKitRecordMetadata:(id)arg1;
- (void)setLastOrderingData:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setSyncEngineMetadata:(id)arg1;
- (void)setSyncFlagsCloudKitRecordMetadata:(id)arg1;
- (id)syncEngineMetadata;
- (id)syncFlagsCloudKitRecordMetadata;

@end

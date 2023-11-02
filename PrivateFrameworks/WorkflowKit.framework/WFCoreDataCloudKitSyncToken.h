
@interface WFCoreDataCloudKitSyncToken : NSManagedObject <WFRecordStorage>

@property (nonatomic, copy) NSString *account;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSData *lastOrderingCloudKitRecordMetadata;
@property (nonatomic, retain) NSData *lastOrderingData;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *syncEngineMetadata;
@property (nonatomic, retain) NSData *syncFlagsCloudKitRecordMetadata;

+ (id)fetchRequest;

- (id)descriptor;

@end

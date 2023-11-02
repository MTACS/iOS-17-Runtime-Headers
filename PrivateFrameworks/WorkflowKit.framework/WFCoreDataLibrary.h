
@interface WFCoreDataLibrary : NSManagedObject <WFRecordStorage>

@property (nonatomic, retain) NSData *cloudKitRecordMetadata;
@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long lastSyncedHash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *version;

+ (id)fetchRequest;

- (id)descriptor;

@end

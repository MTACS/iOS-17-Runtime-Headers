
@interface StoredUploadAsset : NSManagedObject

@property (nonatomic, copy) NSString *assetFileURL;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, retain) StoredProofingSession *proofingSession;
@property (nonatomic, copy) NSString *recordUUID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

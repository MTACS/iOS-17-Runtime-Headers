
@interface ManagedAssetBundle : NSManagedObject

@property (nonatomic, copy) NSDate *dateRequested;
@property (nonatomic, copy) NSString *downloadingDeviceIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int loadStatus;
@property (nonatomic) int reason;
@property (nonatomic, copy) NSString *requestingDeviceIdentifier;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

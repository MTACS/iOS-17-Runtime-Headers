
@interface ManagedAssetRequestKeyMetadata : NSManagedObject

@property (nonatomic) bool canFreeDeviceSlot;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *masterPlaylist;
@property (nonatomic, copy) NSDate *renewDate;
@property (nonatomic, copy) NSString *slotIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic) int version;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

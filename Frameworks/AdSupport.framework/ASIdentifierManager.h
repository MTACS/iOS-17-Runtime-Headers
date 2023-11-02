
@interface ASIdentifierManager : NSObject

@property (nonatomic, readonly) NSUUID *advertisingIdentifier;
@property (getter=isAdvertisingTrackingEnabled, nonatomic, readonly) bool advertisingTrackingEnabled;

+ (id)sharedManager;

- (id)advertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (bool)isAdvertisingTrackingEnabled;
- (bool)isUserOptedIn;

@end

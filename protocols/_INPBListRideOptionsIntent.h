
@protocol _INPBListRideOptionsIntent <NSObject>

@required

- (_INPBLocation *)dropOffLocation;
- (bool)hasDropOffLocation;
- (bool)hasIntentMetadata;
- (bool)hasPickupLocation;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBLocation *)pickupLocation;
- (void)setDropOffLocation:(_INPBLocation *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPickupLocation:(_INPBLocation *)arg1;

@end


@protocol _INPBRequestRideIntentResponse <NSObject>

@required

- (bool)hasRideStatus;
- (_INPBRideStatus *)rideStatus;
- (void)setRideStatus:(_INPBRideStatus *)arg1;

@end

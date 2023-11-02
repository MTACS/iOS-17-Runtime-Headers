
@interface WFRideStatusContentItem : WFContentItem

@property (nonatomic, readonly) INRideStatus *rideStatus;

+ (id)countDescription;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (id)disclaimerMessage;
- (id)driver;
- (id)dropOffLocation;
- (id)estimatedDropOffDate;
- (id)estimatedPickupDate;
- (id)maximumPrice;
- (id)minimumPrice;
- (id)pickupLocation;
- (id)rideOptionName;
- (id)rideStatus;
- (id)vehicleDescription;

@end

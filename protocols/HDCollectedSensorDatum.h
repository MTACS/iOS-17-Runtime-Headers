
@protocol HDCollectedSensorDatum <NSObject, NSCopying, NSSecureCoding>

@required

- (NSDateInterval *)dateInterval;
- (NSUUID *)datumIdentifier;
- (NSData *)resumeContext;

@end

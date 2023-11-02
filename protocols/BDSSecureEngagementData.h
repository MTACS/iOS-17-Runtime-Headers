
@protocol BDSSecureEngagementData <BCCloudData>

@required

- (double)durationInterval;
- (NSString *)startTimestampString;
- (NSData *)value;

@end

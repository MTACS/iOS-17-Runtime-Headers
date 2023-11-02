
@protocol HKDataMetadataObject <HKDataMetadataProvider>

@required

- (NSDictionary *)metadata;
- (NSDate *)startDate;

@end

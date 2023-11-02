
@protocol PLResourceAvailabilityMarking <NSObject>

@required

- (void)markAsLocallyAvailableWithFilePath:(NSString *)arg1;
- (void)markAsNotLocallyAvailable;
- (void)markAsNotLocallyAvailableAfterPurge;

@end

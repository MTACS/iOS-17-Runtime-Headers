
@interface SADailyBriefingGetETAInfo : SABaseClientBoundCommand

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)encodedClassName;
- (id)groupIdentifier;
- (double)latitude;
- (double)longitude;
- (bool)requiresResponse;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;

@end

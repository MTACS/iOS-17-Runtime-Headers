
@interface SADailyBriefingSetETAInfo : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *destination;
@property (nonatomic) double eta;
@property (nonatomic, copy) NSString *transportType;
@property (nonatomic, copy) NSString *viaRoute;

- (id)destination;
- (id)encodedClassName;
- (double)eta;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDestination:(id)arg1;
- (void)setEta:(double)arg1;
- (void)setTransportType:(id)arg1;
- (void)setViaRoute:(id)arg1;
- (id)transportType;
- (id)viaRoute;

@end

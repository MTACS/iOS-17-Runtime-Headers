
@interface MRRemoveSyncedEndpointsMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *endpointUIDs;

- (id)endpointUIDs;
- (id)initWithEndpointUIDs:(id)arg1;
- (unsigned long long)type;

@end


@interface MRUpdateSyncedEndpointsMessage : MRProtocolMessage {
    NSArray * _endpoints;
}

@property (nonatomic, readonly) NSArray *endpoints;
@property (nonatomic, readonly) unsigned int features;

- (void).cxx_destruct;
- (id)endpoints;
- (unsigned int)features;
- (id)initWithEndpoints:(id)arg1 endpointFeature:(unsigned int)arg2;
- (unsigned long long)type;

@end


@interface MRIRRoute : NSObject <MRRouteRepresentable> {
    bool  _donateAsCandidate;
    NSSet * _nodes;
    NSString * _routeIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool donateAsCandidate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *nodes;
@property (nonatomic, retain) NSString *routeIdentifier;
@property (readonly) Class superclass;

+ (id)debugRouteWithDebugIdentifier:(id)arg1;
+ (id)routeWithCandidate:(id)arg1;
+ (id)routeWithEndpoint:(id)arg1;
+ (id)routeWithOutputDevices:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)donateAsCandidate;
- (bool)isEqual:(id)arg1;
- (id)nodes;
- (id)routeIdentifier;
- (void)setDonateAsCandidate:(bool)arg1;
- (void)setNodes:(id)arg1;
- (void)setRouteIdentifier:(id)arg1;

@end

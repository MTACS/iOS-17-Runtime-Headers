
@protocol MRRouteRepresentable <NSObject>

@required

- (bool)donateAsCandidate;
- (NSSet *)nodes;
- (NSString *)routeIdentifier;
- (void)setDonateAsCandidate:(bool)arg1;
- (void)setNodes:(NSSet *)arg1;

@end

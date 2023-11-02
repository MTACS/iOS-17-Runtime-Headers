
@protocol CADSyntheticRouteHypothesizer <NSObject>

@required

- (CADRouteHypothesis *)currentCADRouteHypothesis;
- (void)setCurrentCADRouteHypothesis:(CADRouteHypothesis *)arg1;
- (id /* block */)updateHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end

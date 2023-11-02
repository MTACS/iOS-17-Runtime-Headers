
@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer> {
    GEORouteHypothesizer * _routeHypothesizer;
    CADRouteHypothesis * currentCADRouteHypothesis;
}

@property (nonatomic, retain) CADRouteHypothesis *currentCADRouteHypothesis;
@property (nonatomic, readonly) EKTravelEngineHypothesis *currentHypothesis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEORouteHypothesizer *routeHypothesizer;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ updateHandler;

- (void).cxx_destruct;
- (id)currentCADRouteHypothesis;
- (id)currentHypothesis;
- (void)didPostUINotification:(unsigned long long)arg1;
- (id)initWithRouteHypothesizer:(id)arg1;
- (void)requestRefresh;
- (id)routeHypothesizer;
- (void)setCurrentCADRouteHypothesis:(id)arg1;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)arg1;
- (unsigned long long)state;
- (void)stopHypothesizing;
- (id /* block */)updateHandler;

@end

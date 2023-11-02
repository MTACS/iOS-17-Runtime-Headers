
@interface CALNSyntheticRouteHypothesizer : NSObject <CALNSyntheticRouteHypothesizerProtocol> {
    id /* block */  _updateHandler;
    CADRouteHypothesis * currentCADRouteHypothesis;
}

@property (nonatomic, retain) CADRouteHypothesis *currentCADRouteHypothesis;
@property (nonatomic, readonly) EKTravelEngineHypothesis *currentHypothesis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (id)currentCADRouteHypothesis;
- (id)currentHypothesis;
- (void)didPostUINotification:(unsigned long long)arg1;
- (void)requestRefresh;
- (void)setCurrentCADRouteHypothesis:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)arg1;
- (unsigned long long)state;
- (void)stopHypothesizing;
- (id /* block */)updateHandler;

@end

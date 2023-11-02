
@interface _MNETAUpdateRequestParameters : NSObject {
    GEORouteAttributes * _routeAttributes;
    bool  _shouldRepeatAfterCompletion;
    bool  _shouldRetryImmediatelyOnError;
    bool  _shouldTrackPendingRequest;
    bool  _shouldUseConditionalRequest;
}

@property (nonatomic, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic) bool shouldRepeatAfterCompletion;
@property (nonatomic) bool shouldRetryImmediatelyOnError;
@property (nonatomic) bool shouldTrackPendingRequest;
@property (nonatomic) bool shouldUseConditionalRequest;

- (void).cxx_destruct;
- (id)routeAttributes;
- (void)setRouteAttributes:(id)arg1;
- (void)setShouldRepeatAfterCompletion:(bool)arg1;
- (void)setShouldRetryImmediatelyOnError:(bool)arg1;
- (void)setShouldTrackPendingRequest:(bool)arg1;
- (void)setShouldUseConditionalRequest:(bool)arg1;
- (bool)shouldRepeatAfterCompletion;
- (bool)shouldRetryImmediatelyOnError;
- (bool)shouldTrackPendingRequest;
- (bool)shouldUseConditionalRequest;

@end

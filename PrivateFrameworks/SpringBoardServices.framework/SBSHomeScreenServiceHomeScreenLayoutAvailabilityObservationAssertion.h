
@interface SBSHomeScreenServiceHomeScreenLayoutAvailabilityObservationAssertion : NSObject <BSInvalidatable> {
    bool  _invalidated;
    <SBSHomeScreenServiceLayoutAvailableObserver> * _observer;
    SBSHomeScreenService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly) <SBSHomeScreenServiceLayoutAvailableObserver> *observer;
@property (nonatomic) SBSHomeScreenService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 service:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (id)observer;
- (id)service;
- (void)setInvalidated:(bool)arg1;
- (void)setService:(id)arg1;

@end

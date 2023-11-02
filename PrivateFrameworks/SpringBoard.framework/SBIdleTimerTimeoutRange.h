
@interface SBIdleTimerTimeoutRange : NSObject <BSDescriptionProviding> {
    double  _lowerTimeout;
    double  _upperTimeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lowerTimeout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double upperTimeout;

- (id)clippedRangeWithFavoredRange:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithLowerTimeout:(double)arg1 upperTimeout:(double)arg2;
- (bool)intersects:(id)arg1;
- (double)lowerTimeout;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)upperTimeout;

@end


@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {
    <BSInvalidatable> * _stateCaptureHandle;
}

@property (nonatomic, readonly) long long activeInterfaceOrientation;
@property (nonatomic, readonly, retain) NSArray *interfaceOrientationSources;

- (void).cxx_destruct;
- (id)_highestSourceAtOrBelow:(double)arg1 amongSources:(id)arg2;
- (long long)_layoutOrientation;
- (void)_sortSources:(id)arg1;
- (long long)activeInterfaceOrientation;
- (long long)activeInterfaceOrientationAtOrBelow:(double)arg1;
- (long long)activeInterfaceOrientationBelow:(double)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)highestActiveInterfaceOrientationSource;
- (id)highestActiveInterfaceOrientationSourceBelow:(double)arg1;
- (id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)arg1;
- (id)init;
- (id)interfaceOrientationSources;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

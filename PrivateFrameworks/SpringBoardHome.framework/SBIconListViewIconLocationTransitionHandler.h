
@interface SBIconListViewIconLocationTransitionHandler : NSObject <BSDescriptionProviding, SBIconListViewIconLocationTransitioning> {
    SBIconListView * _iconListView;
    NSString * _iconLocation;
    double  _progress;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic, readonly, copy) NSString *iconLocation;
@property (nonatomic) double progress;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)completeTransition:(bool)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)iconListView;
- (id)iconLocation;
- (id)initWithIconLocation:(id)arg1 reason:(id)arg2 iconListView:(id)arg3;
- (double)progress;
- (id)reason;
- (void)setProgress:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

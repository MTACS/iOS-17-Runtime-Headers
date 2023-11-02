
@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding, NSCopying> {
    NSURL * _applicationLaunchURL;
    BKSDisplayRenderOverlayDescriptor * _customOverlayDescriptor;
    double  _delay;
    NSString * _reason;
    NSString * _requester;
    int  _restartType;
    bool  _wantsPersistentSnapshot;
}

@property (nonatomic, copy) NSURL *applicationLaunchURL;
@property (nonatomic, copy) BKSDisplayRenderOverlayDescriptor *customOverlayDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *requester;
@property (nonatomic) int restartType;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsPersistentSnapshot;

- (void).cxx_destruct;
- (id)applicationLaunchURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customOverlayDescriptor;
- (double)delay;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithRequester:(id)arg1 reason:(id)arg2;
- (id)reason;
- (id)requester;
- (int)restartType;
- (void)setApplicationLaunchURL:(id)arg1;
- (void)setCustomOverlayDescriptor:(id)arg1;
- (void)setDelay:(double)arg1;
- (void)setReason:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)setRestartType:(int)arg1;
- (void)setWantsPersistentSnapshot:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)wantsPersistentSnapshot;

@end

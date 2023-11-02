
@interface SBCenterWindowActivationAnimationContext : NSObject {
    UIView * _contentPortalContainer;
    UIView * _deparentingPortal;
}

@property (nonatomic, retain) UIView *contentPortalContainer;
@property (nonatomic, retain) UIView *deparentingPortal;

- (void).cxx_destruct;
- (id)contentPortalContainer;
- (id)deparentingPortal;
- (void)setContentPortalContainer:(id)arg1;
- (void)setDeparentingPortal:(id)arg1;

@end

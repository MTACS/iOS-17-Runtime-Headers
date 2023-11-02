
@interface SBIconLaunchContext : NSObject <SBHIconLaunchContext> {
    NSSet * _actions;
    SBActivationSettings * _activationSettings;
    SBIconView * _iconView;
}

@property (nonatomic, copy) NSSet *actions;
@property (nonatomic, retain) SBActivationSettings *activationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIconView *iconView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actions;
- (id)activationSettings;
- (id)iconView;
- (void)setActions:(id)arg1;
- (void)setActivationSettings:(id)arg1;
- (void)setIconView:(id)arg1;

@end

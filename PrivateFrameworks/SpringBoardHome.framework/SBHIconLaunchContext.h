
@interface SBHIconLaunchContext : NSObject <SBHIconLaunchContext> {
    NSSet * _actions;
    SBIconView * _iconView;
}

@property (nonatomic, copy) NSSet *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIconView *iconView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actions;
- (id)iconView;
- (void)setActions:(id)arg1;
- (void)setIconView:(id)arg1;

@end

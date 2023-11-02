
@interface SBHistorianSwitcherModifier : SBSwitcherModifier {
    <SBHistorianSwitcherModifierDelegate> * _historianDelegate;
    SBSwitcherModifier * _rootModifier;
}

@property (nonatomic) <SBHistorianSwitcherModifierDelegate> *historianDelegate;
@property (nonatomic, readonly) SBSwitcherModifier *rootModifier;

- (void).cxx_destruct;
- (id)handleEvent:(id)arg1;
- (id)historianDelegate;
- (id)initWithRootModifier:(id)arg1;
- (id)rootModifier;
- (void)setDelegate:(id)arg1;
- (void)setHistorianDelegate:(id)arg1;

@end

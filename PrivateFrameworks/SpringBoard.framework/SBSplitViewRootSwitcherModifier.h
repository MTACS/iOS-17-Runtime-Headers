
@interface SBSplitViewRootSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier * _fullScreenModifier;
    SBSwitcherModifier * _routingModifier;
}

- (void).cxx_destruct;
- (id)_handleEvent:(id)arg1;
- (id)_routingModifierForEvent:(id)arg1;
- (id)init;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;

@end

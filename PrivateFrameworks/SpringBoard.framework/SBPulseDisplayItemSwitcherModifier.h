
@interface SBPulseDisplayItemSwitcherModifier : SBSwitcherModifier {
    SBDisplayItem * _displayItem;
    SBDisplayItem * _displayItemToPulse;
}

@property (nonatomic, readonly) SBDisplayItem *displayItem;
@property (nonatomic, readonly) SBDisplayItem *displayItemToPulse;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)displayItem;
- (id)displayItemToPulse;
- (id)handleTapAppLayoutHeaderEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithDisplayItem:(id)arg1;
- (double)scaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)topMostLayoutElements;

@end

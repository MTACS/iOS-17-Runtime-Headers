
@protocol _UISlotViewContentDelegate <NSObject>

@required

- (UISSlotTag *)currentTagForSlotView:(_UISlotView *)arg1;
- (bool)shouldGetFinalContentSynchronouslyInSlotView:(_UISlotView *)arg1;
- (<UISSlotMachineProtocol> *)slotMachineForFinalContentInSlotView:(_UISlotView *)arg1;
- (void)slotView:(_UISlotView *)arg1 didSetFinalContent:(bool)arg2 forStyle:(UISSlotStyle *)arg3 tag:(UISSlotTag *)arg4;
- (void)slotView:(_UISlotView *)arg1 didSetInitialContent:(bool)arg2 forStyle:(UISSlotStyle *)arg3 tag:(UISSlotTag *)arg4;
- (<UISSlotAnyContent> *)slotView:(_UISlotView *)arg1 initialContentForStyle:(UISSlotStyle *)arg2 tag:(UISSlotTag *)arg3;
- (<UISSlotAnyContent> *)slotView:(_UISlotView *)arg1 replacementForFinalContent:(id <UISSlotAnyContent>)arg2 style:(UISSlotStyle *)arg3 tag:(UISSlotTag *)arg4;
- (bool)slotView:(_UISlotView *)arg1 shouldSetFinalContentForStyle:(UISSlotStyle *)arg2 tag:(UISSlotTag *)arg3;
- (bool)slotView:(_UISlotView *)arg1 shouldSetInitialContentForStyle:(UISSlotStyle *)arg2 tag:(UISSlotTag *)arg3;

@end

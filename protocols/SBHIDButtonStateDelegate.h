
@protocol SBHIDButtonStateDelegate

@required

- (void)performActionsForButtonDown:(SBHIDButtonStateArbiter *)arg1;
- (void)performActionsForButtonLongPress:(SBHIDButtonStateArbiter *)arg1;
- (void)performActionsForButtonUp:(SBHIDButtonStateArbiter *)arg1;

@end

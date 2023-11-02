
@protocol WFUIKitParameterEditingControllerDelegate

@required

- (void)cancelEditing;
- (void)finishEditingWithParameterState:(id <WFParameterState>)arg1;

@end

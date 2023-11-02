
@interface WFSelectPhotoAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)pickerTypes;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (bool)selectMultiple;

@end


@protocol AirPortAssistantControllerDelegate

@optional

- (void)airPortAssistantComplete:(AirPortAssistantController *)arg1;
- (void)airPortAssistantComplete:(AirPortAssistantController *)arg1 animated:(bool)arg2;
- (void)airPortAssistantComplete:(AirPortAssistantController *)arg1 result:(int)arg2 context:(id)arg3 animated:(bool)arg4;
- (void)wacDevicesAdded:(NSArray *)arg1 andWACDevicesRemoved:(NSArray *)arg2 withController:(AirPortAssistantController *)arg3;

@end

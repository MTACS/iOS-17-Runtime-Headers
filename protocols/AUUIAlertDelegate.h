
@protocol AUUIAlertDelegate <NSObject>

@optional

- (bool)auUIAlertAlternateAction:(AUUIAlert *)arg1;
- (bool)auUIAlertCancelAction:(AUUIAlert *)arg1;
- (bool)auUIAlertDestructiveAction:(AUUIAlert *)arg1;
- (bool)auUIAlertOKAction:(AUUIAlert *)arg1;

@end

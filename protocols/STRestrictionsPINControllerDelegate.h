
@protocol STRestrictionsPINControllerDelegate <DevicePINControllerDelegate>

@required

- (bool)validatePIN:(NSString *)arg1 forPINController:(STRestrictionsPINController *)arg2;

@optional

- (void)setPIN:(NSString *)arg1 forPINController:(STRestrictionsPINController *)arg2;

@end

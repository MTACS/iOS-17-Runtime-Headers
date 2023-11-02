
@protocol MNUserOptionsObserver <NSObject>

@required

- (void)userOptionsEngine:(MNUserOptionsEngine *)arg1 didChangeFrom:(MNUserOptions *)arg2 to:(MNUserOptions *)arg3;

@end

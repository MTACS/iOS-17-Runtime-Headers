
@interface _UIControlCenterClickInteractionDriver : _UILongPressTimeoutClickInteractionDriver

+ (bool)prefersCancelsTouchesInView;

- (double)clickDownDuration;
- (double)clickTimeoutDuration;
- (id)init;

@end

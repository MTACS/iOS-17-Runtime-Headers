
@protocol TVRUIRemoteViewControllerDelegate <NSObject>

@required

- (void)device:(id <TVRUIDevice>)arg1 supportsSiri:(bool)arg2 volume:(bool)arg3;
- (void)devicePickerWillExpand;

@end

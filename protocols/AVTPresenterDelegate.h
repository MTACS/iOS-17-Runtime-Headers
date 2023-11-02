
@protocol AVTPresenterDelegate <NSObject>

@required

- (void)dismissAvatarUIControllerAnimated:(bool)arg1;
- (void)presentAvatarUIController:(AVTUIControllerPresentation *)arg1 animated:(bool)arg2;

@optional

- (void)presentedAvatarRecord:(id <AVTAvatarRecord>)arg1;

@end

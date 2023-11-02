
@protocol AVTAvatarDisplayingControllerDelegate <NSObject>

@required

- (void)didBeginFocus:(id <AVTAvatarDisplayingController>)arg1;
- (void)didEndFocus:(id <AVTAvatarDisplayingController>)arg1;
- (void)displayingController:(id <AVTAvatarDisplayingController>)arg1 didChangeCurrentRecord:(id <AVTAvatarRecord>)arg2;
- (void)displayingController:(id <AVTAvatarDisplayingController>)arg1 didMoveTowardRecord:(id <AVTAvatarRecord>)arg2 withFactor:(double)arg3;
- (void)displayingControllerWantsToPresentEditorForCreation:(id <AVTAvatarDisplayingController>)arg1;
- (void)willBeginFocus:(id <AVTAvatarDisplayingController>)arg1;
- (void)willEndFocus:(id <AVTAvatarDisplayingController>)arg1;

@end

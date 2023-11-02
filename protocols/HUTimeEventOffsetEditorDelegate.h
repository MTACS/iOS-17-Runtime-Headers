
@protocol HUTimeEventOffsetEditorDelegate <NSObject>

@required

- (void)timerTriggerOffsetEditor:(HUTimeEventOffsetEditorViewController *)arg1 didFinishWithOffset:(NSDateComponents *)arg2;
- (void)timerTriggerOffsetEditorDidCancel:(HUTimeEventOffsetEditorViewController *)arg1;

@end

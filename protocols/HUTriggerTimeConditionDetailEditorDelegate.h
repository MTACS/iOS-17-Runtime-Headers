
@protocol HUTriggerTimeConditionDetailEditorDelegate <NSObject>

@required

- (void)timeConditionEditor:(HUTriggerTimeConditionDetailEditorViewController *)arg1 didFinishWithCondition:(HFTimeRangeCondition *)arg2;
- (void)timeConditionEditorDidCancel:(HUTriggerTimeConditionDetailEditorViewController *)arg1;

@end

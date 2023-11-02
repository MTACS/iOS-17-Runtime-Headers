
@interface WFDailyRoutineShortcutSetupQuestion : NSObject {
    NSString * _prompt;
    NSString * _subtitle;
}

@property (nonatomic, readonly, copy) NSString *prompt;
@property (nonatomic, readonly, copy) NSString *subtitle;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)initWithPrompt:(id)arg1 subtitle:(id)arg2;
- (id)prompt;
- (id)subtitle;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)dailyRoutineShortcutSetupQuestionChildViewControllerWithDelegate:(id)arg1;

@end

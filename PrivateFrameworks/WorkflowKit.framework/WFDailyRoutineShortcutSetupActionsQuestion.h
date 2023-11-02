
@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion {
    NSArray * _actions;
    NSString * _addButtonTitle;
    WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion * _followUpQuestion;
    WFImage * _icon;
    NSString * _skipButtonTitle;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, copy) NSString *addButtonTitle;
@property (nonatomic, retain) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *followUpQuestion;
@property (nonatomic, retain) WFImage *icon;
@property (nonatomic, copy) NSString *skipButtonTitle;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (id)actions;
- (id)addButtonTitle;
- (id)followUpQuestion;
- (id)icon;
- (id)initWithPrompt:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;
- (void)setAddButtonTitle:(id)arg1;
- (void)setFollowUpQuestion:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSkipButtonTitle:(id)arg1;
- (id)skipButtonTitle;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)dailyRoutineShortcutSetupQuestionChildViewControllerWithDelegate:(id)arg1;

@end

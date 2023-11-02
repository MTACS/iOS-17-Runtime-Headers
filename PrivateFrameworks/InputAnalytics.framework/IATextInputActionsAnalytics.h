
@interface IATextInputActionsAnalytics : NSObject {
    <IATextInputActionsAnalyticsDelegate> * _analyticsDelegate;
    IATextInputActionsSessionAction * _lastAction;
    NSObject<OS_dispatch_queue> * _queue;
    IATextInputActionsServer * _server;
    NSUUID * _sessionIdentifier;
}

@property (nonatomic) <IATextInputActionsAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, retain) IATextInputActionsSessionAction *lastAction;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IATextInputActionsServer *server;
@property (nonatomic, copy) NSUUID *sessionIdentifier;

- (void).cxx_destruct;
- (void)_didDeleteBackwardAction:(id)arg1;
- (void)_didDeleteBackwardText:(id)arg1 withType:(long long)arg2 shouldOverrideInputActionCountToZero:(bool)arg3 withLanguage:(id)arg4;
- (void)_didInsertTextAction:(id)arg1 withLanguage:(id)arg2;
- (id)_instanceOfActionClass:(Class)arg1;
- (id)analyticsDelegate;
- (void)didAutocorrectReplacementForText:(id)arg1 withText:(id)arg2;
- (void)didCalloutBarReplacementForText:(id)arg1 withText:(id)arg2;
- (void)didCandidateBarReplacementForText:(id)arg1 withText:(id)arg2;
- (void)didChangeToSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 relativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)didCopy:(id)arg1;
- (void)didCut:(id)arg1;
- (void)didDeleteBackwardText:(id)arg1;
- (void)didDeleteBackwardText:(id)arg1 withType:(long long)arg2;
- (void)didDeletionKeyPress;
- (void)didDictationBegin:(bool)arg1 usesMultiModalDictation:(bool)arg2;
- (void)didDictationEnd;
- (void)didInsertText:(id)arg1 withType:(long long)arg2;
- (void)didInsertText:(id)arg1 withType:(long long)arg2 selectedTextBefore:(id)arg3;
- (void)didInsertText:(id)arg1 withType:(long long)arg2 selectedTextBefore:(id)arg3 withLanguage:(id)arg4;
- (void)didInsertText:(id)arg1 withType:(long long)arg2 withLanguage:(id)arg3;
- (void)didInsertionKeyPress;
- (void)didOther;
- (void)didPaste:(id)arg1;
- (void)didRedo;
- (void)didReplacementForText:(id)arg1 withText:(id)arg2 withSource:(long long)arg3 withType:(long long)arg4;
- (void)didSessionBegin;
- (void)didSessionEnd;
- (void)didUndo;
- (void)flushAndSetLastAction:(id)arg1;
- (id)initWithAnalyticsDelegate:(id)arg1;
- (id)lastAction;
- (void)mergeOrConsumeAction:(id)arg1;
- (id)queue;
- (id)server;
- (id)sessionIdentifier;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setLastAction:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end

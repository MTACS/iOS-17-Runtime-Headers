
@protocol EKEventEditViewControllerImpl <NSObject>

@required

- (EKEventEditor *)_eventEditorForTestingOnly;
- (void)cancelEditing;
- (void)cancelEditingWithDelegateNotification:(bool)arg1 forceCancel:(bool)arg2;
- (void)completeAndSave;
- (void)completeAndSaveWithContinueBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIAlertController *)confirmDismissAlertController;
- (<EKEventEditViewDelegate> *)editViewDelegate;
- (UIColor *)editorBackgroundColor;
- (EKEvent *)event;
- (NSString *)eventCreationMethod;
- (EKEventStore *)eventStore;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (bool)hasUnsavedChanges;
- (bool)ignoreUnsavedChanges;
- (id)precommitSerializedEvent;
- (void)presentationControllerDidAttemptToDismiss;
- (void)refreshStartAndEndDates;
- (void)setEditViewDelegate:(id <EKEventEditViewDelegate>)arg1;
- (void)setEditorBackgroundColor:(UIColor *)arg1;
- (void)setEvent:(EKEvent *)arg1;
- (void)setEventCreationMethod:(NSString *)arg1;
- (void)setEventStore:(EKEventStore *)arg1;
- (void)setIgnoreUnsavedChanges:(bool)arg1;
- (void)setShouldOverrideAuthorizationStatus:(bool)arg1 withRemoteUIStatus:(long long)arg2;
- (void)setShouldRecordPrecommitEvent:(bool)arg1;
- (void)setSuggestionKey:(NSString *)arg1;
- (void)setTimeImplicitlySet:(bool)arg1;
- (bool)shouldRecordPrecommitEvent;
- (NSString *)suggestionKey;
- (bool)timeImplicitlySet;
- (bool)willPresentDialogOnSave;

@end

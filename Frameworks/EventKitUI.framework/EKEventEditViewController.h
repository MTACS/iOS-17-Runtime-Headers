
@interface EKEventEditViewController : UINavigationController <EKUIManagedViewController, UIAdaptivePresentationControllerDelegate> {
    UIViewController<EKEventEditViewControllerImpl> * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool displayingRootView;
@property (nonatomic) <EKEventEditViewDelegate> *editViewDelegate;
@property (nonatomic, retain) UIColor *editorBackgroundColor;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) NSString *eventCreationMethod;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreUnsavedChanges;
@property (nonatomic, readonly) id precommitSerializedEvent;
@property (nonatomic) bool shouldRecordPrecommitEvent;
@property (nonatomic, retain) NSString *suggestionKey;
@property (readonly) Class superclass;
@property (nonatomic) bool timeImplicitlySet;

+ (id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;

- (void).cxx_destruct;
- (id)_eventEditorForTestingOnly;
- (bool)canManagePresentationStyle;
- (void)cancelEditing;
- (void)cancelEditingWithDelegateNotification:(bool)arg1 forceCancel:(bool)arg2;
- (void)completeAndSave;
- (void)completeAndSaveWithContinueBlock:(id /* block */)arg1;
- (id)confirmDismissAlertController;
- (bool)displayingRootView;
- (id)editViewDelegate;
- (id)editorBackgroundColor;
- (id)event;
- (id)eventCreationMethod;
- (id)eventStore;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (bool)hasUnsavedChanges;
- (bool)ignoreUnsavedChanges;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRemoteUI:(bool)arg1;
- (id)precommitSerializedEvent;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentationControllerDidAttemptToDismiss;
- (void)refreshStartAndEndDates;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditorBackgroundColor:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventCreationMethod:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setIgnoreUnsavedChanges:(bool)arg1;
- (void)setShouldOverrideAuthorizationStatus:(bool)arg1 withRemoteUIStatus:(long long)arg2;
- (void)setShouldRecordPrecommitEvent:(bool)arg1;
- (void)setSuggestionKey:(id)arg1;
- (void)setTimeImplicitlySet:(bool)arg1;
- (bool)shouldRecordPrecommitEvent;
- (id)suggestionKey;
- (bool)timeImplicitlySet;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsManagement;
- (bool)willPresentDialogOnSave;

@end

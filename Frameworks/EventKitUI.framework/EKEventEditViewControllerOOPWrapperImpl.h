
@interface EKEventEditViewControllerOOPWrapperImpl : UIViewController <EKEventEditViewControllerImpl> {
    _TtC10EventKitUI32EKEventEditViewControllerOOPImpl * _vc;
    NSString * _viewID;
    NSString * eventCreationMethod;
    bool  ignoreUnsavedChanges;
    id  precommitSerializedEvent;
    bool  shouldRecordPrecommitEvent;
    NSString * suggestionKey;
    bool  timeImplicitlySet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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
@property (nonatomic, retain) _TtC10EventKitUI32EKEventEditViewControllerOOPImpl *vc;

- (void).cxx_destruct;
- (id)_ekEventEditViewController;
- (id)_eventEditorForTestingOnly;
- (void)cancelEditing;
- (void)cancelEditingWithDelegateNotification:(bool)arg1 forceCancel:(bool)arg2;
- (void)completeAndSave;
- (void)completeAndSaveWithContinueBlock:(id /* block */)arg1;
- (id)confirmDismissAlertController;
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
- (id)init;
- (id)initWithViewID:(id)arg1;
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
- (void)setVc:(id)arg1;
- (bool)shouldRecordPrecommitEvent;
- (id)suggestionKey;
- (bool)timeImplicitlySet;
- (id)vc;
- (void)viewDidLoad;
- (bool)willPresentDialogOnSave;

@end

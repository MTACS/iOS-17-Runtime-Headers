
@interface EKUIProposedTimeEventViewControllerDefaultImpl : EKEventViewControllerDefaultImpl <EKUIProposedTimeEventViewControllerImpl> {
    EKUIEmailCompositionManager * _messageSendingManager;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    id /* block */  completionBlock;
    EKCalendarEventInvitationNotificationAttendee * proposedTimeAttendee;
}

@property (nonatomic) bool allowsCalendarPreview;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool calendarPreviewIsInlineDayView;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (retain) EKUIEmailCompositionManager *messageSendingManager;
@property (nonatomic, retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee;
@property (retain) EKUIRecurrenceAlertController *recurrenceAlertController;
@property (nonatomic) bool showsDetectedConferenceItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2;
- (id)items;
- (id)messageSendingManager;
- (id)proposedTime;
- (id)proposedTimeAttendee;
- (id)recurrenceAlertController;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setMessageSendingManager:(id)arg1;
- (void)setProposedTimeAttendee:(id)arg1;
- (void)setRecurrenceAlertController:(id)arg1;
- (id)statusButtons;
- (id)viewTitle;

@end


@protocol EKUIProposedTimeEventViewControllerImpl <NSObject>

@required

- (bool)allowsCalendarPreview;
- (bool)allowsEditing;
- (bool)calendarPreviewIsInlineDayView;
- (id /* block */)completionBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (<EKEventViewDelegate> *)delegate;
- (EKEvent *)event;
- (EKCalendarEventInvitationNotificationAttendee *)proposedTimeAttendee;
- (void)setAllowsCalendarPreview:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setCalendarPreviewIsInlineDayView:(bool)arg1;
- (void)setCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <EKEventViewDelegate>)arg1;
- (void)setEvent:(EKEvent *)arg1;
- (void)setProposedTimeAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg1;
- (void)setShowsDetectedConferenceItem:(bool)arg1;
- (bool)showsDetectedConferenceItem;

@end

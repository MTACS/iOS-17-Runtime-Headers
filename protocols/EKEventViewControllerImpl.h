
@protocol EKEventViewControllerImpl <NSObject>

@required

- (void)_performEditKeyCommand;
- (bool)allowsCalendarPreview;
- (bool)allowsEditing;
- (bool)allowsInviteResponses;
- (bool)allowsSubitems;
- (bool)calendarPreviewIsInlineDayView;
- (NSDictionary *)context;
- (<EKEventViewDelegate> *)delegate;
- (void)doneButtonTapped;
- (void)editButtonTapped;
- (int)editorHideTransition;
- (int)editorShowTransition;
- (EKEvent *)event;
- (UIScrollView *)eventDetailsScrollView;
- (UIViewController *)eventDetailsViewController;
- (bool)eventEditViewPresented;
- (void)fullReloadWithNewEvent:(EKEvent *)arg1;
- (bool)inlineDayViewRespectsSelectedCalendarsFilter;
- (bool)isICSPreview;
- (bool)isLargeDayView;
- (bool)minimalMode;
- (<EKUIViewControllerNavigationDelegate> *)navigationDelegate;
- (bool)noninteractivePlatterMode;
- (void)openAttendeesDetailItem;
- (void)setAllowsCalendarPreview:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsInviteResponses:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setCalendarPreviewIsInlineDayView:(bool)arg1;
- (void)setContext:(NSDictionary *)arg1;
- (void)setDelegate:(id <EKEventViewDelegate>)arg1;
- (void)setEditorHideTransition:(int)arg1;
- (void)setEditorShowTransition:(int)arg1;
- (void)setEvent:(EKEvent *)arg1;
- (void)setEventEditViewPresented:(bool)arg1;
- (void)setICSPreview:(bool)arg1;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setIsLargeDayView:(bool)arg1;
- (void)setMinimalMode:(bool)arg1;
- (void)setNavigationDelegate:(id <EKUIViewControllerNavigationDelegate>)arg1;
- (void)setNeedsReload;
- (void)setNoninteractivePlatterMode:(bool)arg1;
- (void)setShouldOverrideAuthorizationStatus:(bool)arg1 withRemoteUIStatus:(long long)arg2;
- (void)setShowsAddToCalendarForICSPreview:(bool)arg1;
- (void)setShowsDelegateMessage:(bool)arg1;
- (void)setShowsDelegatorMessage:(bool)arg1;
- (void)setShowsDeleteForICSPreview:(bool)arg1;
- (void)setShowsDetectedConferenceItem:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsOutOfDateMessage:(bool)arg1;
- (void)setShowsUpdateCalendarForICSPreview:(bool)arg1;
- (bool)showsAddToCalendarForICSPreview;
- (bool)showsDelegateMessage;
- (bool)showsDelegatorMessage;
- (bool)showsDeleteForICSPreview;
- (bool)showsDetectedConferenceItem;
- (bool)showsDoneButton;
- (bool)showsOutOfDateMessage;
- (bool)showsUpdateCalendarForICSPreview;

@end

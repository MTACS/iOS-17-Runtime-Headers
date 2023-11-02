
@interface SearchUICreateCalendarEventHandler : SearchUICommandHandler

- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (unsigned long long)destination;
- (id)eventFromSFCalendarEvent:(id)arg1 eventStore:(id)arg2;
- (bool)prefersContextMenu;
- (bool)prefersModalPresentation;

@end

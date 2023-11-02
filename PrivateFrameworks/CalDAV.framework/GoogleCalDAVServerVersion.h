
@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (bool)requiresOpeningAttachmentAsLink;
- (bool)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)supportedCalendarComponentSets;
- (id)type;

@end

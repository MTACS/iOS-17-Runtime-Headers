
@interface ICNoteTimelineController : NSObject

+ (id)adjustedDateForReferenceDate:(id)arg1;
+ (id)invitationsTimelineSectionIdentifierWithTitle:(id)arg1 referenceDate:(id)arg2;
+ (id)pinnedTimelineSectionIdentifierWithTitle:(id)arg1 referenceDate:(id)arg2;
+ (id)sanitizedDatesForDates:(id)arg1 referenceDate:(id)arg2;
+ (void)setTimeZone:(id)arg1;
+ (id)timelineSectionIdentifierForNoteObjectID:(id)arg1 date:(id)arg2 referenceDate:(id)arg3;
+ (id)timelineSectionIdentifierForNoteObjectID:(id)arg1 date:(id)arg2 sectionIdentifiersToManagedObjectIDs:(id)arg3;
+ (id)timelineSectionsForNoteObjectIDs:(id)arg1 dates:(id)arg2 referenceDate:(id)arg3 direction:(long long)arg4;

@end

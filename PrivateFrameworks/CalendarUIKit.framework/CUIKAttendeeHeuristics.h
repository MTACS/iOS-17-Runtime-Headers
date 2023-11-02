
@interface CUIKAttendeeHeuristics : NSObject

+ (id)_participantRoleSortPriority;
+ (id)_participantStatusSortPriority;
+ (id)sortedHumanAttendeesForEvent:(id)arg1 includeResources:(bool)arg2;
+ (id)sortedHumanAttendeesToDisplayForEvent:(id)arg1 options:(unsigned long long)arg2;

@end

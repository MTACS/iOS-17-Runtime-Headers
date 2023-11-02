
@interface CUIKSaveOperation : CUIKUserOperation {
    NSDictionary * _objectsRequiringAlteredSpan;
    NSArray * _previousObjects;
    NSArray * _previousSliceInfo;
}

@property (retain) NSDictionary *objectsRequiringAlteredSpan;
@property (retain) NSArray *previousObjects;
@property (retain) NSArray *previousSliceInfo;

+ (id)alarmsAddedActionName:(id)arg1;
+ (id)alarmsModifiedActionName:(id)arg1;
+ (id)alarmsRemovedActionName:(id)arg1;
+ (id)attachmentsAddedActionName:(id)arg1;
+ (id)attachmentsModifiedActionName:(id)arg1;
+ (id)attachmentsRemovedActionName:(id)arg1;
+ (id)attendeesAddedActionName:(id)arg1;
+ (id)attendeesModifiedActionName:(id)arg1;
+ (id)attendeesRemovedActionName:(id)arg1;
+ (id)changedAllDayActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedAvailablityActionName:(id)arg1;
+ (id)changedCalendarActionName:(id)arg1;
+ (id)changedColorOfCalendar:(id)arg1;
+ (id)changedLocationActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedNotesActionName:(id)arg1;
+ (id)changedParticipationStatusActionName:(id)arg1;
+ (id)changedPrivacyActionName:(id)arg1;
+ (id)changedRecurrenceRuleActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedResponseCommentActionName:(id)arg1;
+ (id)changedTimeActionName:(id)arg1;
+ (id)changedTimeZoneActionName:(id)arg1;
+ (id)changedTitleActionName:(id)arg1;
+ (id)changedTitleOfCalendar:(id)arg1;
+ (id)changedTravelTimeActionNameWithCurrentEvent:(id)arg1 previousEvent:(id)arg2;
+ (id)changedURLActionName:(id)arg1;
+ (id)genericEventChangedActionName:(id)arg1;
+ (id)multipleEventsChangedActionName;
+ (id)shareesAddedActionName:(id)arg1;
+ (id)shareesModifiedActionName:(id)arg1;
+ (id)shareesRemovedActionName:(id)arg1;

- (void).cxx_destruct;
- (id)_actionName;
- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (id)_inverseOperation;
- (Class)_inverseOperationClass;
- (id)_invertedNonSliceObjects;
- (id)_objectsForInverse;
- (id)_objectsRequiringAlteredSpan:(id)arg1;
- (long long)_spanForObject:(id)arg1;
- (void)_storePreviousObjects;
- (void)_storePreviousState;
- (id)objectsRequiringAlteredSpan;
- (id)previousObjects;
- (id)previousSliceInfo;
- (void)setObjectsRequiringAlteredSpan:(id)arg1;
- (void)setPreviousObjects:(id)arg1;
- (void)setPreviousSliceInfo:(id)arg1;

@end


@interface EKUIContextMenuActions : NSObject

+ (void)_acceptProposedTimeForEvent:(id)arg1 presentationController:(id)arg2;
+ (id)_allActionInfos;
+ (bool)_canEmailOrganizerForEvent:(id)arg1;
+ (id)_createCalendarsMenuForEvents:(id)arg1 presentationController:(id)arg2 isEditMenu:(bool)arg3 overrideActionBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
+ (id)_filteredSortedActionInfosForEvents:(id)arg1 presentationController:(id)arg2 isEditMenu:(bool)arg3;
+ (long long)_menuStateForStatus:(long long)arg1 events:(id)arg2;
+ (id)_organizerContactForEvent:(id)arg1;
+ (void)_performSaveWithEvent:(id)arg1 span:(long long)arg2 editor:(id)arg3;
+ (void)_presentMailViewControllerSendingToOrganizer:(bool)arg1 event:(id)arg2 presentationController:(id)arg3;
+ (id)_proposedDateForEvent:(id)arg1;
+ (void)_saveStatus:(long long)arg1 forEvent:(id)arg2 presentationController:(id)arg3;
+ (void)deleteEvents:(id)arg1 presentationController:(id)arg2;
+ (bool)eventsAllDeletable:(id)arg1;
+ (id)menuForEvents:(id)arg1 presentationController:(id)arg2 isEditMenu:(bool)arg3 overrideActionBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
+ (long long)statusButtonsActionFromContextMenuAction:(unsigned long long)arg1;

@end

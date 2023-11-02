
@interface EKUIInviteeContextMenuData : NSObject <CNContactOrbActionsControllerDelegate> {
    NSArray * _calendarMenuEndItems;
    NSArray * _calendarMenuStartItems;
    CNContactOrbActionsController * _contactActionsController;
    UIContextMenuInteraction * _interaction;
    UIMenu * _menu;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIMenu *menu;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildCombinedCalendarAndContactsMenu;
- (id)_contactsMenu;
- (void)_setupCalendarMenuForSection:(id)arg1 indexPath:(id)arg2 participant:(id)arg3 participantSetRole:(id /* block */)arg4;
- (void)_setupContactsOrbActionControllerForParticipant:(id)arg1;
- (void)contactOrbActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)initWithDefaultActionsForSection:(id)arg1 indexPath:(id)arg2 participant:(id)arg3 interaction:(id)arg4 participantSetRole:(id /* block */)arg5;
- (id)menu;
- (id)presentingViewControllerForActionsController:(id)arg1;
- (void)setMenu:(id)arg1;

@end

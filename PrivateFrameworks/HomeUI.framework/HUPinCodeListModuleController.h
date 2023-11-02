
@interface HUPinCodeListModuleController : HUItemModuleController <HFItemSectionAccessoryButtonHeaderDelegate, HUPinCodeDetailsViewDelegate, HUSwitchCellDelegate, HUUserSwitchCellDelegate> {
    UIBarButtonItem * _addGuestDoneButtonItem;
    HUPinCodeDetailsViewController * _addGuestViewController;
    bool  _editing;
}

@property (nonatomic, retain) UIBarButtonItem *addButtonItem;
@property (nonatomic, retain) UIBarButtonItem *addGuestDoneButtonItem;
@property (nonatomic, retain) HUPinCodeDetailsViewController *addGuestViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (id)addButtonItem;
- (id)addGuestDoneButtonItem;
- (void)addGuestDoneButtonPressed:(id)arg1;
- (id)addGuestViewController;
- (bool)canSelectItem:(id)arg1;
- (void)cancelAddGuest:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (bool)editing;
- (void)hideSpinner;
- (id)initWithModule:(id)arg1;
- (void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2;
- (void)setAddButtonItem:(id)arg1;
- (void)setAddGuestDoneButtonItem:(id)arg1;
- (void)setAddGuestViewController:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)showSpinner;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (void)userSwitchCell:(id)arg1 didTurnOn:(bool)arg2;

@end

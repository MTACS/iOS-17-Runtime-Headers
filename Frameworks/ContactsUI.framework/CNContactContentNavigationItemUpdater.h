
@interface CNContactContentNavigationItemUpdater : NSObject {
    NSArray * _extraLeftBarButtonItems;
    NSArray * _extraRightBarButtonItems;
    NSArray * _preEditLeftBarButtonItems;
}

@property (nonatomic, retain) NSArray *extraLeftBarButtonItems;
@property (nonatomic, retain) NSArray *extraRightBarButtonItems;
@property (nonatomic, retain) NSArray *preEditLeftBarButtonItems;

- (void).cxx_destruct;
- (void)applyPlatterStyleToBarButtonItems:(id)arg1 navItemController:(id)arg2 isEditing:(bool)arg3;
- (id)buttonPlatterImage;
- (id)customEditItemTitleForIsUpdatingContact:(bool)arg1;
- (id)extraLeftBarButtonItems;
- (id)extraRightBarButtonItems;
- (id)preEditLeftBarButtonItems;
- (void)setExtraLeftBarButtonItems:(id)arg1;
- (void)setExtraRightBarButtonItems:(id)arg1;
- (void)setPreEditLeftBarButtonItems:(id)arg1;
- (id)transparentPlatterImage;
- (void)updateBackButtonForPlatterStyleForController:(id)arg1 mode:(long long)arg2 platterBackBarButtonItem:(id)arg3 animated:(bool)arg4;
- (void)updateDisplayDoneButtonForController:(id)arg1 allowsEditing:(bool)arg2 viewMode:(long long)arg3 editButtonEnabled:(bool)arg4;
- (void)updateDisplayDoneButtonForController:(id)arg1 allowsEditing:(bool)arg2 viewMode:(long long)arg3 editRequiresAuthorization:(bool)arg4;
- (id)updateDisplayNavigationItemsForController:(id)arg1 mode:(long long)arg2 actionTarget:(id)arg3 allowsEditing:(bool)arg4 editButtonEnabled:(bool)arg5 isInSheet:(bool)arg6 isShowingNavBar:(bool)arg7 shouldShowBackButton:(bool)arg8 shouldUsePlatterStyle:(bool)arg9 platterBackBarButtonItem:(id)arg10 animated:(bool)arg11;
- (id)updateDisplayNavigationItemsForController:(id)arg1 mode:(long long)arg2 actionTarget:(id)arg3 allowsEditing:(bool)arg4 editRequiresAuthorization:(bool)arg5 isInSheet:(bool)arg6 isShowingNavBar:(bool)arg7 shouldShowBackButton:(bool)arg8 shouldUsePlatterStyle:(bool)arg9 platterBackBarButtonItem:(id)arg10 animated:(bool)arg11;
- (id)updateEditDoneButtonForController:(id)arg1 customEditButtonTitle:(id)arg2 hasChanges:(bool)arg3;
- (id)updateEditDoneButtonForController:(id)arg1 isUpdatingContact:(bool)arg2 hasChanges:(bool)arg3;
- (id)updateEditingNavigationItemForController:(id)arg1 actionTarget:(id)arg2 isInSheet:(bool)arg3 isShowingNavBar:(bool)arg4 shouldUsePlatterStyle:(bool)arg5 customEditButtonTitle:(id)arg6 hasChanges:(bool)arg7 animated:(bool)arg8;
- (id)updateEditingNavigationItemForController:(id)arg1 actionTarget:(id)arg2 isInSheet:(bool)arg3 isShowingNavBar:(bool)arg4 shouldUsePlatterStyle:(bool)arg5 isUpdatingContact:(bool)arg6 hasChanges:(bool)arg7 animated:(bool)arg8;

@end

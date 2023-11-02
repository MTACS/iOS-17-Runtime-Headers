
@interface FamilyCircleUI.FASwiftUIHostingControllerProvider : NSObject

+ (id)familyMemberAccountChangePasswordControllerWithMainAccount:(id)arg1 memberToShow:(id)arg2 familyCircle:(id)arg3;
+ (id)getCheckListControllerWithSpecifiers:(id)arg1;
+ (id)getFamilyChecklistHeaderView;
+ (id)getFamilySettingsViewControllerWithViewModel:(id)arg1 locationModel:(id)arg2 pictureStore:(id)arg3 appleAccount:(id)arg4 accountManager:(id)arg5 delegate:(id)arg6 appleCardFamilySettingsViewModel:(id)arg7;
+ (id)getLoadingControllerWithCancelAction:(id /* block */)arg1;
+ (id)getLocationViewControllerWithViewModel:(id)arg1 pictureStore:(id)arg2 hackfromObjC:(bool)arg3;

- (id)init;

@end

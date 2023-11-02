
@interface SHSheetFactory : NSObject

+ (id)_createPlatformViewControllerWithSession:(id)arg1;
+ (id)createAirdropViewControllerWithNoContentView:(bool)arg1 delegate:(id)arg2;
+ (id)createCollaborationOptionsViewControllerWithOptions:(id)arg1 updateHandler:(id /* block */)arg2;
+ (id)createCollaborationParticipantsViewControllerWithContext:(id)arg1 request:(id)arg2 delegate:(id)arg3;
+ (id)createContentViewControllerWithSession:(id)arg1 presenter:(id)arg2;
+ (id)createMainPresenterWithContext:(id)arg1;
+ (id)createOptionsViewControllerWithContext:(id)arg1 delegate:(id)arg2;
+ (id)createScreenTimeAlertViewController;
+ (id)createUserDefaultsViewControllerWithContext:(id)arg1 delegate:(id)arg2;

@end

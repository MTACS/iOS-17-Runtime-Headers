
@interface _GroupActivities_UIKit.PeoplePickerController : NSObject <_EXHostViewControllerDelegate> {
    void $__lazy_storage_$_connection;
    void $__lazy_storage_$_extensionViewController;
    void $__lazy_storage_$_hostViewControllerConfig;
    void conversationManager;
    void conversationManagerClient;
    void hostViewController;
    void shareSheetSessionID;
    void startStagedActivity;
}

- (void).cxx_destruct;
- (void)hostViewController:(id)arg1 didEndHosting:(id)arg2 error:(id)arg3;
- (void)hostViewController:(id)arg1 didFailToHost:(id)arg2 error:(id)arg3;
- (void)hostViewController:(id)arg1 didPrepareToHost:(id)arg2;
- (id)init;

@end

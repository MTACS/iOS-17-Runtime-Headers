
@interface HPSSpatialProfileManagementController : PSListController

- (void)cancelEnrollment;
- (id)init;
- (void)presentProfileEnrollmentController:(id)arg1;
- (void)promptResetProfile:(id)arg1;
- (void)resetProfile:(id)arg1;
- (void)spatialAudioProfileUpdateHandler:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)userDidTapSpatialProfilePrivacyLink:(id)arg1;

@end

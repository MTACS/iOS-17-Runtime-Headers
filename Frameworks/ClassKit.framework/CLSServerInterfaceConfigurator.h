
@interface CLSServerInterfaceConfigurator : NSObject {
    NSSet * _arraySet;
    NSSet * _contextsSet;
    NSXPCInterface * _interface;
}

- (void).cxx_destruct;
- (void)configureAdminRequestAPI;
- (void)configureAppsAPI;
- (void)configureAssetSupportAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureClassAPI;
- (void)configureCollaborationStateAPI;
- (void)configureCollectionsAPI;
- (void)configureContextAPI;
- (void)configureDashboardAppAPI;
- (void)configureDataObserverAPI;
- (void)configureFeatureAvailabilityAPI;
- (void)configureHandoutAPI;
- (void)configureInsightEventsAPI;
- (void)configureProgressReportingAPI;
- (void)configureQueryAPI;
- (void)configureRelayRequestAPI;
- (void)configureSaveAPI;
- (id)configureServerInterface;
- (void)configureStudentActivityAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureUserNotificationAPI;
- (void)configureUtilityServerAPI;
- (id)init;

@end

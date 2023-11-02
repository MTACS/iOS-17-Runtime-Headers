
@interface ATXManagedConfigurationUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    <ATXUpdatePredictionsDelegate> * _delegate;
    MCProfileConnection * _profileConnection;
    id  _restrictionChangedNotificationToken;
}

@property (nonatomic) <ATXUpdatePredictionsDelegate> *delegate;
@property (nonatomic, retain) MCProfileConnection *profileConnection;

- (void).cxx_destruct;
- (void)_registerForRestrictionChangedNotifications;
- (id)delegate;
- (void)handleProfileChangedNotification;
- (id)init;
- (id)initWithProfileConnection:(id)arg1;
- (id)profileConnection;
- (void)setDelegate:(id)arg1;
- (void)setProfileConnection:(id)arg1;

@end

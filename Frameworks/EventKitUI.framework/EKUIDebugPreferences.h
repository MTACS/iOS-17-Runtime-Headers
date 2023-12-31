
@interface EKUIDebugPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic) bool showInviteesAndMoreRegion;
@property (nonatomic) bool showReportAProblemNotificationButton;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)setShowInviteesAndMoreRegion:(bool)arg1;
- (void)setShowReportAProblemNotificationButton:(bool)arg1;
- (bool)showInviteesAndMoreRegion;
- (bool)showReportAProblemNotificationButton;

@end

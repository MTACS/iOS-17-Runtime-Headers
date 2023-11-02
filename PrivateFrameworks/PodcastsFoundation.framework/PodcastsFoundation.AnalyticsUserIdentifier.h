
@interface PodcastsFoundation.AnalyticsUserIdentifier : NSObject {
    void clientId;
    void userAllowsPersonalization;
    void userId;
    void userIsManagedAccount;
    void userUnder13YearsOld;
}

@property (nonatomic, copy) NSString *clientId;
@property (nonatomic) bool userAllowsPersonalization;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic) bool userIsManagedAccount;
@property (nonatomic) bool userUnder13YearsOld;

- (void).cxx_destruct;
- (id)clientId;
- (id)init;
- (void)setClientId:(id)arg1;
- (void)setUserAllowsPersonalization:(bool)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserIsManagedAccount:(bool)arg1;
- (void)setUserUnder13YearsOld:(bool)arg1;
- (bool)userAllowsPersonalization;
- (id)userId;
- (bool)userIsManagedAccount;
- (bool)userUnder13YearsOld;

@end

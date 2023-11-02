
@interface AMSPushConfiguration : NSObject {
    <AMSPushHandlerDelegate> * _delegate;
    NSSet * _enabledActionTypes;
    NSString * _engagementPushTopic;
    NSString * _userNotificationExtensionId;
}

@property (nonatomic) <AMSPushHandlerDelegate> *delegate;
@property (nonatomic, retain) NSSet *enabledActionTypes;
@property (nonatomic, retain) NSString *engagementPushTopic;
@property (nonatomic, retain) NSString *userNotificationExtensionId;

- (void).cxx_destruct;
- (id)delegate;
- (id)enabledActionTypes;
- (id)engagementPushTopic;
- (id)initWithEnabledActionTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledActionTypes:(id)arg1;
- (void)setEngagementPushTopic:(id)arg1;
- (void)setUserNotificationExtensionId:(id)arg1;
- (id)userNotificationExtensionId;

@end

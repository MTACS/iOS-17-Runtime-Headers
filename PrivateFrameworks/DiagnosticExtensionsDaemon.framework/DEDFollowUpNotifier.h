
@interface DEDFollowUpNotifier : NSObject <DEDNotificationDelivering, DEDNotifier, DEDSecureArchiving, NSSecureCoding> {
    NSString * _bugSessionIdentifier;
    DEDNotifierConfiguration * _config;
    FLFollowUpController * _followUpController;
}

@property (retain) NSString *bugSessionIdentifier;
@property DEDNotifierConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) FLFollowUpController *followUpController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (void)forceRemoveNotificationWithIdentifier:(id)arg1 hostIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bugSessionIdentifier;
- (id)config;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpController;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)presentNotificationForSession:(id)arg1;
- (void)removeNotificationForSession:(id)arg1;
- (void)setBugSessionIdentifier:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setFollowUpController:(id)arg1;

@end

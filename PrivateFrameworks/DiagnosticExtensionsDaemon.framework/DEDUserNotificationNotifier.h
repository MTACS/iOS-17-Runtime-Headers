
@interface DEDUserNotificationNotifier : NSObject <DEDNotificationDelivering, DEDNotifier, DEDSecureArchiving, NSSecureCoding> {
    NSString * _bugSessionIdentifier;
    UNUserNotificationCenter * _center;
    DEDNotifierConfiguration * _config;
    NSObject<OS_os_log> * _log;
}

@property (retain) NSString *bugSessionIdentifier;
@property (retain) UNUserNotificationCenter *center;
@property DEDNotifierConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (void)forceRemoveNotificationWithIdentifier:(id)arg1 hostIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bugSessionIdentifier;
- (id)center;
- (id)config;
- (id)createNotificationCenter;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)log;
- (void)presentNotificationForSession:(id)arg1;
- (void)removeNotificationForSession:(id)arg1;
- (void)setBugSessionIdentifier:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setLog:(id)arg1;

@end

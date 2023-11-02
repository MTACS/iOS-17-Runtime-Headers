
@interface CMSSessionContextModel : NSObject <NSSecureCoding> {
    bool  _homeKitAllowExplicitContentSetting;
    bool  _homeKitUpdateListeningHistorySetting;
    NSString * _homeUserID;
    NSString * _serverEnvironmentOverride;
    NSURL * _serverOverrideURL;
    NSString * _serviceID;
    bool  _serviceUpdateListeningHistory;
    NSString * _sessionAuthHeaderOverride;
}

@property (nonatomic) bool homeKitAllowExplicitContentSetting;
@property (nonatomic) bool homeKitUpdateListeningHistorySetting;
@property (nonatomic, copy) NSString *homeUserID;
@property (nonatomic, copy) NSString *serverEnvironmentOverride;
@property (nonatomic, copy) NSURL *serverOverrideURL;
@property (nonatomic, copy) NSString *serviceID;
@property (nonatomic) bool serviceUpdateListeningHistory;
@property (nonatomic, copy) NSString *sessionAuthHeaderOverride;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)homeKitAllowExplicitContentSetting;
- (bool)homeKitUpdateListeningHistorySetting;
- (id)homeUserID;
- (id)initWithCoder:(id)arg1;
- (id)serverEnvironmentOverride;
- (id)serverOverrideURL;
- (id)serviceID;
- (bool)serviceUpdateListeningHistory;
- (id)sessionAuthHeaderOverride;
- (void)setHomeKitAllowExplicitContentSetting:(bool)arg1;
- (void)setHomeKitUpdateListeningHistorySetting:(bool)arg1;
- (void)setHomeUserID:(id)arg1;
- (void)setServerEnvironmentOverride:(id)arg1;
- (void)setServerOverrideURL:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setServiceUpdateListeningHistory:(bool)arg1;
- (void)setSessionAuthHeaderOverride:(id)arg1;

@end

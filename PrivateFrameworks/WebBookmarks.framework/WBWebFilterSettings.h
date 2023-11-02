
@interface WBWebFilterSettings : NSObject {
    WFUserSettings * _userSettings;
}

@property (nonatomic, readonly) WFUserSettings *userSettings;
@property (nonatomic, readonly) bool usesAllowedSitesOnly;
@property (getter=isWebFilterEnabled, nonatomic, readonly) bool webFilterEnabled;

+ (id)sharedWebFilterSettings;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isWebFilterEnabled;
- (void)reloadSettings;
- (id)userSettings;
- (bool)usesAllowedSitesOnly;

@end

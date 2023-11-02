
@interface VSIdentityProviderChannelAppsResponse : NSObject {
    NSArray * _allApps;
    NSDictionary * _appsByChannelID;
}

@property (nonatomic, copy) NSArray *allApps;
@property (nonatomic, copy) NSDictionary *appsByChannelID;

- (void).cxx_destruct;
- (id)allApps;
- (id)appsByChannelID;
- (id)init;
- (void)setAllApps:(id)arg1;
- (void)setAppsByChannelID:(id)arg1;

@end

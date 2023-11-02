
@interface MSAssistantPreferences : NSObject {
    AFMultiUserConnection * _connection;
}

@property (nonatomic, retain) AFMultiUserConnection *connection;

+ (id)intentExamples;
+ (bool)isMultiUserEnabledForSiri;
+ (id)sharedPreferences;
+ (id)supportedMediaIntents;

- (void).cxx_destruct;
- (id)connection;
- (void)getHomeUserIDForSpeaker:(id)arg1 completion:(id /* block */)arg2;
- (void)getSharedUserIDForHomeUser:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setConnection:(id)arg1;

@end

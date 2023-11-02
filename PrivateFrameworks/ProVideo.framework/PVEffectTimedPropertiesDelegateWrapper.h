
@interface PVEffectTimedPropertiesDelegateWrapper : NSObject {
    NSArray * _supportedTimedPropertyGroups;
    <PVEffectTimedPropertiesDelegate> * _timedPropertiesDelegate;
    NSDictionary * _userContext;
    bool  _wantsStartStopNotifications;
}

@property (nonatomic, retain) NSArray *supportedTimedPropertyGroups;
@property (nonatomic) <PVEffectTimedPropertiesDelegate> *timedPropertiesDelegate;
@property (nonatomic, retain) NSDictionary *userContext;
@property (nonatomic) bool wantsStartStopNotifications;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTimedPropertiesDelegate:(id)arg1 supportedTimedPropertyGroups:(id)arg2 userContext:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setSupportedTimedPropertyGroups:(id)arg1;
- (void)setTimedPropertiesDelegate:(id)arg1;
- (void)setUserContext:(id)arg1;
- (void)setWantsStartStopNotifications:(bool)arg1;
- (id)supportedTimedPropertyGroups;
- (id)timedPropertiesDelegate;
- (id)userContext;
- (bool)wantsStartStopNotifications;

@end

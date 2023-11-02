
@interface SVXModule : NSObject {
    AFAnalytics * _analytics;
    NSString * _identifier;
    Class  _instanceClass;
    AFInstanceContext * _instanceContext;
    bool  _isActive;
    <SVXPerforming> * _performer;
    AFPreferences * _preferences;
}

@property (nonatomic, readonly) AFAnalytics *analytics;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) Class instanceClass;
@property (nonatomic, readonly) AFInstanceContext *instanceContext;
@property (nonatomic) bool isActive;
@property (nonatomic, readonly) <SVXPerforming> *performer;
@property (nonatomic, readonly) AFPreferences *preferences;

- (void).cxx_destruct;
- (id)analytics;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 instanceClass:(Class)arg2 instanceContext:(id)arg3 preferences:(id)arg4 analytics:(id)arg5 performer:(id)arg6;
- (Class)instanceClass;
- (id)instanceContext;
- (bool)isActive;
- (id)performer;
- (id)preferences;
- (void)setIsActive:(bool)arg1;

@end


@interface TCPreferences : NSObject {
    NSMutableDictionary * _properties;
}

@property (readonly) long long devicePolicy;
@property (nonatomic, retain) NSMutableDictionary *properties;

+ (id)defaultPreferences;
+ (void)setOverridePreferences:(id)arg1;
+ (id)userPreferences;

- (void).cxx_destruct;
- (long long)devicePolicy;
- (id)initWithDefaults;
- (id)initWithProperties:(id)arg1;
- (id)properties;
- (void)setDevicePolicy:(long long)arg1;
- (void)setProperties:(id)arg1;

@end

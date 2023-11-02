
@interface MSDKDemoState : NSObject {
    NSMutableDictionary * _cache;
}

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)_activationConfigurationFlags:(id*)arg1;
- (bool)_isDeviceEnrolledWithDeKOTA:(id*)arg1;
- (bool)_isStoreDemoModeEnabled:(id*)arg1;
- (id)cache;
- (id)init;
- (bool)isDeviceEnrolledWithDeKOTA;
- (bool)isDeviceEnrolledWithDeKOTA:(id*)arg1;
- (bool)isStoreDemoModeEnabled;
- (bool)isStoreDemoModeEnabled:(id*)arg1;
- (void)setCache:(id)arg1;

@end


@interface WAProviderAttributionManager : NSObject {
    NSUserDefaults * _weatherUserDefaults;
}

@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSUserDefaults *weatherUserDefaults;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)providerName;
- (id)weatherUserDefaults;

@end

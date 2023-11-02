
@interface NewsArticles.DarkModeConfiguration : NSObject <SXDarkModeConfiguration> {
    void headline;
}

@property (nonatomic, readonly) bool autoDarkModeEnabled;
@property (nonatomic, readonly) NSDictionary *colors;
@property (nonatomic, readonly) unsigned long long inversionBehavior;
@property (nonatomic, readonly) double saturationThreshold;

- (void).cxx_destruct;
- (id)colors;
- (id)init;
- (unsigned long long)inversionBehavior;
- (bool)isAutoDarkModeEnabled;
- (double)saturationThreshold;

@end


@interface TZPreferencesController : NSObject

@property (nonatomic, readonly) long long loggingLevel;
@property (nonatomic, readonly) bool updatesEnabled;

+ (id)sharedPreferencesController;

- (id)init;
- (long long)loggingLevel;
- (void)preferencesChanged:(id)arg1;
- (bool)updatesEnabled;

@end


@protocol CSLPRFStingConfigurationProviding <NSObject>

@required

- (unsigned long long)actionType;
- (NSString *)bundleID;
- (bool)isEnabled;
- (void)setDelegate:(id <CSLPRFStingConfigurationDelegate>)arg1;
- (long long)source;
- (NSString *)workoutIdentifier;

@optional

- (void)reset;

@end

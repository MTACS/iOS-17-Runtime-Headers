
@protocol CSTouchEnvironmentStatusProviding <NSObject>

@required

- (bool)expectsPocketTouches;
- (bool)tapToWakeEnabled;

@end

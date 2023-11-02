
@protocol CSBehaviorProviding <NSObject>

@required

- (void)conformsToCSBehaviorProviding;
- (long long)notificationBehavior;
- (long long)proximityDetectionMode;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;

@end

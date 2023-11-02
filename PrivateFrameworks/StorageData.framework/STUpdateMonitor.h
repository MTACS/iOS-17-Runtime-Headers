
@interface STUpdateMonitor : NSObject {
    NSString * _bundleIdentifier;
    NSString * _currentUpdateName;
    long long  _currentUpdateSize;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *currentUpdateName;
@property (readonly) long long currentUpdateSize;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)currentUpdateName;
- (long long)currentUpdateSize;
- (void)startMonitor;
- (void)stopMonitor;
- (void)sync;

@end

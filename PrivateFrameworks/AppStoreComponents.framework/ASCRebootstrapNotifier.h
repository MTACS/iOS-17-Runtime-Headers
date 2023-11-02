
@interface ASCRebootstrapNotifier : NSObject {
    unsigned long long  _rebootstrapCounterSnapshot;
    int  _token;
}

@property (nonatomic) unsigned long long rebootstrapCounterSnapshot;
@property (nonatomic, readonly) int token;

+ (id)sharedNotifier;

- (id)_initSingleton;
- (void)dealloc;
- (void)postLocalNotification;
- (void)postLocalNotificationIfNeeded;
- (unsigned long long)rebootstrapCounterSnapshot;
- (void)setRebootstrapCounterSnapshot:(unsigned long long)arg1;
- (int)token;

@end

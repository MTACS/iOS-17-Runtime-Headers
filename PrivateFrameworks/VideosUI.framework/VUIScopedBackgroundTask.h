
@interface VUIScopedBackgroundTask : NSObject {
    unsigned long long  _taskIdentifier;
}

@property (nonatomic) unsigned long long taskIdentifier;

- (void)_endTask;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1 expirationHandler:(id /* block */)arg2;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (unsigned long long)taskIdentifier;

@end

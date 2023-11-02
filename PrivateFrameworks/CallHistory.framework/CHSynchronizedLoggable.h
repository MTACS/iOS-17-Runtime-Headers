
@interface CHSynchronizedLoggable : NSObject {
    CHLogger * _logger;
    CHSynchronizable * _synchronizable;
}

- (void).cxx_destruct;
- (void)execute:(id /* block */)arg1;
- (void)executeSync:(id /* block */)arg1;
- (bool)executeSyncWithBOOL:(id /* block */)arg1;
- (id)executeSyncWithResult:(id /* block */)arg1;
- (id)initWithName:(const char *)arg1;
- (id)initWithName:(const char *)arg1 queue:(id)arg2;
- (id)logHandle;
- (id)queue;

@end


@interface WebBackgroundTaskController : NSObject {
    id /* block */  _backgroundTaskEndBlock;
    id /* block */  _backgroundTaskStartBlock;
    unsigned long long  _invalidBackgroundTaskIdentifier;
}

@property (nonatomic, copy) id /* block */ backgroundTaskEndBlock;
@property (nonatomic, copy) id /* block */ backgroundTaskStartBlock;
@property (nonatomic) unsigned long long invalidBackgroundTaskIdentifier;

+ (id)sharedController;

- (id /* block */)backgroundTaskEndBlock;
- (id /* block */)backgroundTaskStartBlock;
- (void)dealloc;
- (void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1;
- (unsigned long long)invalidBackgroundTaskIdentifier;
- (void)setBackgroundTaskEndBlock:(id /* block */)arg1;
- (void)setBackgroundTaskStartBlock:(id /* block */)arg1;
- (void)setInvalidBackgroundTaskIdentifier:(unsigned long long)arg1;
- (unsigned long long)startBackgroundTaskWithExpirationHandler:(id /* block */)arg1;

@end

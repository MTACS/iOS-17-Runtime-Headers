
@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray * _eventListeners;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_setupDarwinListener;
- (void)_setupDistributedListener;
- (void)registerListener:(id)arg1;
- (void)start;

@end

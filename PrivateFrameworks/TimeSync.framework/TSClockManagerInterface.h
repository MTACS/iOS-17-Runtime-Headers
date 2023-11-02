
@interface TSClockManagerInterface : NSObject <TSClockManagerClient> {
    TSClockManager * _clockManager;
    int (* _interruptionCallback;
    void * _interruptionRefcon;
}

@property (nonatomic, retain) TSClockManager *clockManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addToClockManager;
- (id)clockManager;
- (id)init;
- (void)interruptedConnectionForClockManager:(id)arg1;
- (void)removeFromClockManager;
- (void)setClockManager:(id)arg1;
- (void)setInterruptionCallback:(int (*)arg1 andRefcon:(void*)arg2;

@end

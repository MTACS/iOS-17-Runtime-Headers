
@interface CalSignalSensor : NSObject {
    id /* block */  _fireBlock;
    int  _signal;
    NSObject<OS_dispatch_source> * _signalSource;
}

@property (nonatomic, copy) id /* block */ fireBlock;
@property (nonatomic) int signal;

- (void).cxx_destruct;
- (void)_shutDownSource;
- (void)dealloc;
- (id)description;
- (id /* block */)fireBlock;
- (id)initWithSignal:(int)arg1;
- (void)setFireBlock:(id /* block */)arg1;
- (void)setSignal:(int)arg1;
- (int)signal;
- (void)startSensor;
- (void)stopSensor;

@end

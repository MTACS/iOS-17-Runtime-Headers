
@interface WFScreenOnObserver : NSObject {
    <WFScreenOnObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _screenOn;
    int  _token;
}

@property (nonatomic) <WFScreenOnObserverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool screenOn;
@property (nonatomic) int token;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)queue;
- (bool)screenOn;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setToken:(int)arg1;
- (void)start;
- (void)stateChanged:(bool)arg1;
- (void)stop;
- (int)token;

@end

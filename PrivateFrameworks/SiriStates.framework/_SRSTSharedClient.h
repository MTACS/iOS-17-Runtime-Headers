
@interface _SRSTSharedClient : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mostRecentEvent;
    void delegate;
    void stopped;
}

@property (nonatomic, retain) _SRSTSharedState *currentState;
@property (nonatomic) <_SRSTSharedClientDelegate> *delegate;
@property (nonatomic, readonly) NSString *mostRecentEventName;

- (void).cxx_destruct;
- (id)currentState;
- (void)dealloc;
- (id)delegate;
- (void)dispatchEvent:(long long)arg1;
- (id)init;
- (id)mostRecentEventName;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopClient;

@end


@interface ANTelephonyObserver : NSObject {
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
}

@property (nonatomic) <ANTelephonyObserverDelegate> *delegate;
@property (nonatomic, readonly) bool hasCalls;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (bool)hasCalls;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

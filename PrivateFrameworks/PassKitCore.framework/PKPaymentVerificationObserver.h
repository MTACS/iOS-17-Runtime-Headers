
@interface PKPaymentVerificationObserver : NSObject {
    <PKPaymentVerificationObserverDelegate> * _delegate;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _observing;
    IMOneTimeCodeAccelerator * _oneTimeCodeObserver;
    PKPaymentPass * _pass;
    bool  _skipSourceCheck;
    NSObject<OS_dispatch_source> * _timer;
    PKVerificationChannel * _verificationChannel;
}

@property (nonatomic) <PKPaymentVerificationObserverDelegate> *delegate;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;
@property (nonatomic) bool skipSourceCheck;
@property (nonatomic, readonly, retain) PKVerificationChannel *verificationChannel;

- (void).cxx_destruct;
- (bool)_handleVerificationCode:(id)arg1 fromSource:(id)arg2;
- (void)_queue_stop;
- (void)_startObserving;
- (void)_startObservingUsingLegacyObserver;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)initWithPaymentPass:(id)arg1 verificationChannel:(id)arg2 identifier:(id)arg3;
- (id)pass;
- (void)setDelegate:(id)arg1;
- (void)setSkipSourceCheck:(bool)arg1;
- (bool)skipSourceCheck;
- (void)startObservingVerificationSourceWithTimeout:(double)arg1;
- (void)stop;
- (id)verificationChannel;

@end

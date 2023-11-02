
@interface FigNSURLSession : NSObject {
    int  _assertionCount;
    NSString * _clientBundleIdentifier;
    NSString * _clientPersonaIdentifier;
    NSURLSessionConfiguration * _configuration;
    <NSURLSessionDataDelegate> * _dataDelegate;
    int  _deferReleaseSeconds;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _doomCheckScheduled;
    long long  _doomTime;
    NSOperationQueue * _opQueue;
    NSURLSession * _session;
    NSObject<OS_os_transaction> * _transaction;
    struct OpaqueFigCFWeakReferenceHolder { } * _weakAssertion;
}

@property (nonatomic) int assertionCount;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) NSString *clientPersonaIdentifier;
@property (nonatomic, readonly) <NSURLSessionDataDelegate> *dataDelegate;
@property (nonatomic) int deferReleaseSeconds;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool doomCheckScheduled;
@property (nonatomic) long long doomTime;
@property (nonatomic, readonly) NSOperationQueue *opQueue;
@property (nonatomic, readonly) NSURLSession *session;

- (struct FigOpaqueAssertion { }*)acquireAssertion;
- (unsigned char)acquireOSTransaction;
- (int)assertionCount;
- (id)clientBundleIdentifier;
- (id)clientPersonaIdentifier;
- (id)dataDelegate;
- (void)dealloc;
- (void)debug;
- (int)deferReleaseSeconds;
- (id)dispatchQueue;
- (bool)doomCheckScheduled;
- (long long)doomTime;
- (id)initWithClientBundleIdentifier:(id)arg1 clientPersonaIdentifier:(id)arg2 dispatchQueue:(id)arg3;
- (id)opQueue;
- (void)releaseOSTransaction;
- (id)session;
- (void)setAssertionCount:(int)arg1;
- (void)setDeferReleaseSeconds:(int)arg1;
- (void)setDoomCheckScheduled:(bool)arg1;
- (void)setDoomTime:(long long)arg1;

@end

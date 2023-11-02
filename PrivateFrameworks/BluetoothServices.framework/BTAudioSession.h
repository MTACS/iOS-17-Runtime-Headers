
@interface BTAudioSession : NSObject <NSSecureCoding> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    int  _audioArbitrationResult;
    int  _category;
    unsigned int  _clientID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    bool  _inAppRouting;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    int  _mode;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    double  _timeoutSeconds;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) int audioArbitrationResult;
@property (nonatomic) int category;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool inAppRouting;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) int mode;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) double timeoutSeconds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activate;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_reportError:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)audioArbitrationResult;
- (int)category;
- (unsigned int)clientID;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (bool)inAppRouting;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (int)mode;
- (void)setAudioArbitrationResult:(int)arg1;
- (void)setCategory:(int)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInAppRouting:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (id)testListenerEndpoint;
- (double)timeoutSeconds;

@end

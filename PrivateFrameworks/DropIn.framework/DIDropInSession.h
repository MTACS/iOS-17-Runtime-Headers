
@interface DIDropInSession : NSObject <NSSecureCoding> {
    DIXPCConnectionManager * _connectionManager;
    <DIDropInSessionDelegate> * _delegate;
    NSUUID * _identifier;
    NSRecursiveLock * _lock;
    bool  _needsInitialUplinkMuteStatus;
    DIDropInRequest * _request;
    unsigned long long  _state;
    unsigned long long  _stateReason;
    bool  _uplinkMuted;
}

@property (nonatomic) DIXPCConnectionManager *connectionManager;
@property (nonatomic) <DIDropInSessionDelegate> *delegate;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) NSRecursiveLock *lock;
@property (nonatomic) bool needsInitialUplinkMuteStatus;
@property (nonatomic, readonly) DIDropInRequest *request;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stateReason;
@property (getter=isUplinkMuted, nonatomic) bool uplinkMuted;

+ (id)stringForDropInSessionState:(unsigned long long)arg1;
+ (id)stringForDropInSessionStateReason:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancelWithCompletionHandler:(id /* block */)arg1;
- (void)cancelWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connectionManager;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)endWithCompletionHandler:(id /* block */)arg1;
- (void)failWithError:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNullableRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUplinkMuted;
- (id)lock;
- (bool)needsInitialUplinkMuteStatus;
- (id)request;
- (void)setConnectionManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNeedsInitialUplinkMuteStatus:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStateReason:(unsigned long long)arg1;
- (void)setUplinkMuted:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)state;
- (unsigned long long)stateReason;
- (void)updateUplinkMuteStatus:(bool)arg1;
- (void)updateWithSession:(id)arg1;

@end

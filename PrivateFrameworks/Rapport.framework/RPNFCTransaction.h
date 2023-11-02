
@interface RPNFCTransaction : NSObject <NSSecureCoding, RPNearFieldTransaction> {
    bool  _connected;
    NSDate * _connectionDate;
    <RPNFCTransactionDelegate> * _delegate;
    NSError * _error;
    NSUUID * _identifier;
    RPTransportServiceHandoverMessage * _remoteAuthenticationMessage;
    RPIdentity * _remoteIdentity;
    RPTransportServiceHandoverMessage * _remoteValidationMessage;
    long long  _role;
    long long  _state;
    RPNearFieldTapEvent * _tapEvent;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (nonatomic, readonly) NSDate *connectionDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RPNFCTransactionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isInitiator;
@property (nonatomic, retain) RPTransportServiceHandoverMessage *remoteAuthenticationMessage;
@property (nonatomic, retain) RPIdentity *remoteIdentity;
@property (nonatomic, retain) RPTransportServiceHandoverMessage *remoteValidationMessage;
@property (nonatomic, readonly) long long role;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) RPNearFieldTapEvent *tapEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectionDate;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithRole:(long long)arg1;
- (bool)isConnected;
- (bool)isInitiator;
- (id)remoteAuthenticationMessage;
- (id)remoteIdentity;
- (id)remoteValidationMessage;
- (long long)role;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRemoteAuthenticationMessage:(id)arg1;
- (void)setRemoteIdentity:(id)arg1;
- (void)setRemoteValidationMessage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTapEvent:(id)arg1;
- (long long)state;
- (id)tapEvent;

@end

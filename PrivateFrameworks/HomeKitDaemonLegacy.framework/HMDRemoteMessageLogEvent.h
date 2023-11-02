
@interface HMDRemoteMessageLogEvent : HMMLogEvent {
    NSString * _msgIdentifier;
    NSString * _msgName;
    long long  _msgQoS;
    long long  _msgType;
    NSString * _peerInformation;
    bool  _secure;
    bool  _sending;
    NSString * _transactionIdentifier;
    int  _transportType;
}

@property (nonatomic, readonly, copy) NSString *msgIdentifier;
@property (nonatomic, readonly) NSString *msgName;
@property (nonatomic, readonly) long long msgQoS;
@property (nonatomic, readonly) long long msgType;
@property (nonatomic, readonly) NSString *peerInformation;
@property (nonatomic, readonly) bool secure;
@property (nonatomic, readonly) bool sending;
@property (nonatomic, readonly, copy) NSString *transactionIdentifier;
@property (nonatomic, readonly) int transportType;

+ (id)receivedRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(bool)arg6 transportType:(int)arg7 messageQoS:(long long)arg8;
+ (id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)sendingRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(bool)arg6 transportType:(int)arg7 messageQoS:(long long)arg8;
+ (id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2;

- (void).cxx_destruct;
- (id)initWithRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(bool)arg6 transportType:(int)arg7 sending:(bool)arg8 messageQoS:(long long)arg9;
- (id)msgIdentifier;
- (id)msgName;
- (long long)msgQoS;
- (long long)msgType;
- (id)peerInformation;
- (bool)secure;
- (bool)sending;
- (id)transactionIdentifier;
- (int)transportType;

@end

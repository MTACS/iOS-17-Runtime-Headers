
@interface NPTPing : NSObject <NSCopying, NSSecureCoding, SimplePingDelegate> {
    id /* block */  _completion;
    id  _delegate;
    NPTPingResult * _results;
    NSObject<OS_nw_activity> * activityParent;
    NSObject<OS_nw_activity> * pingActivity;
    unsigned long long  pingCount;
    SimplePing * pinger;
    NSMutableArray * pings;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPTPingResult *results;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkActivityParent:(id)arg1;
- (id)initWithNetworkActivityParent:(id)arg1 pingTarget:(id)arg2;
- (id)results;
- (void)sendPing;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResults:(id)arg1;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)simplePing:(id)arg1 didTimeOut:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)startWithNumberOfPings:(unsigned long long)arg1 forcingIPv4:(bool)arg2 forcingIPv6:(bool)arg3;
- (void)startWithNumberOfPings:(unsigned long long)arg1 forcingIPv4:(bool)arg2 forcingIPv6:(bool)arg3 completion:(id /* block */)arg4;
- (void)stop;

@end

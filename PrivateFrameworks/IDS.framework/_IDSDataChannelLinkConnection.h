
@interface _IDSDataChannelLinkConnection : NSObject {
    bool  _allowOutgoing;
    NSUUID * _childConnectionID;
    unsigned long long  _clientNWConnectionID;
    bool  _isQUICPod;
    unsigned long long  _nwConnectionID;
    NSString * _nwConnectionToken;
    NSString * _protocolStack;
    NSString * _type;
}

@property bool allowOutgoing;
@property (retain) NSUUID *childConnectionID;
@property unsigned long long clientNWConnectionID;
@property bool isQUICPod;
@property unsigned long long nwConnectionID;
@property (retain) NSString *nwConnectionToken;
@property (retain) NSString *protocolStack;
@property (retain) NSString *type;

- (void).cxx_destruct;
- (bool)allowOutgoing;
- (id)childConnectionID;
- (unsigned long long)clientNWConnectionID;
- (id)description;
- (bool)isQUICPod;
- (unsigned long long)nwConnectionID;
- (id)nwConnectionToken;
- (id)protocolStack;
- (void)setAllowOutgoing:(bool)arg1;
- (void)setChildConnectionID:(id)arg1;
- (void)setClientNWConnectionID:(unsigned long long)arg1;
- (void)setIsQUICPod:(bool)arg1;
- (void)setNwConnectionID:(unsigned long long)arg1;
- (void)setNwConnectionToken:(id)arg1;
- (void)setProtocolStack:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

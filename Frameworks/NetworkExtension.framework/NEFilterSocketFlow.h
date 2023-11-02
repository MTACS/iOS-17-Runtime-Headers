
@interface NEFilterSocketFlow : NEFilterFlow <NSCopying, NSSecureCoding> {
    NSUUID * _euuid;
    long long  _generateIdentifierOnce;
    NWEndpoint * _localEndpoint;
    NWEndpoint * _remoteEndpoint;
    NSString * _remoteHostname;
    int  _socketFamily;
    unsigned long long  _socketID;
    int  _socketProtocol;
    int  _socketType;
    NSUUID * _socketUUID;
    NSUUID * _uuid;
}

@property (copy) NWEndpoint *localEndpoint;
@property (copy) NWEndpoint *remoteEndpoint;
@property (copy) NSString *remoteHostname;
@property int socketFamily;
@property int socketProtocol;
@property int socketType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (bool)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)identifierString;
- (id)initWithCoder:(id)arg1;
- (id)localEndpoint;
- (id)remoteEndpoint;
- (id)remoteHostname;
- (void)setLocalEndpoint:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1;
- (void)setRemoteHostname:(id)arg1;
- (void)setSocketFamily:(int)arg1;
- (void)setSocketProtocol:(int)arg1;
- (void)setSocketType:(int)arg1;
- (int)socketFamily;
- (int)socketProtocol;
- (int)socketType;

@end

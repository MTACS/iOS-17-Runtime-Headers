
@interface NENetworkRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _appliesToLoopback;
    long long  _matchDirection;
    NWHostEndpoint * _matchLocalNetwork;
    unsigned long long  _matchLocalPrefix;
    long long  _matchProtocol;
    NWHostEndpoint * _matchRemoteEndpoint;
    unsigned long long  _matchRemotePrefix;
}

@property (nonatomic, readonly) bool appliesToLoopback;
@property (readonly) long long matchDirection;
@property (readonly) NWHostEndpoint *matchLocalNetwork;
@property (readonly) unsigned long long matchLocalPrefix;
@property (readonly) long long matchProtocol;
@property (readonly) NWHostEndpoint *matchRemoteEndpoint;
@property (readonly) unsigned long long matchRemotePrefix;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)appliesToLoopback;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationHost:(id)arg1 protocol:(long long)arg2;
- (id)initWithDestinationNetwork:(id)arg1 prefix:(unsigned long long)arg2 protocol:(long long)arg3;
- (id)initWithRemoteNetwork:(id)arg1 remotePrefix:(unsigned long long)arg2 localNetwork:(id)arg3 localPrefix:(unsigned long long)arg4 protocol:(long long)arg5 direction:(long long)arg6;
- (long long)matchDirection;
- (id)matchLocalNetwork;
- (unsigned long long)matchLocalPrefix;
- (long long)matchProtocol;
- (id)matchRemoteEndpoint;
- (unsigned long long)matchRemotePrefix;

@end

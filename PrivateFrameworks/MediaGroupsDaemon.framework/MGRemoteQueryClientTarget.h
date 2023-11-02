
@interface MGRemoteQueryClientTarget : NSObject <NSCopying> {
    NSObject<OS_nw_endpoint> * _endpoint;
    NSString * _homeHash;
    unsigned long long  _protocolVersion;
}

@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic, readonly, copy) NSString *homeHash;
@property (nonatomic, readonly) unsigned long long protocolVersion;

+ (id)targetWithEndpoint:(id)arg1 txtRecord:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)arg1 txtRecord:(id)arg2;
- (bool)_parseTXTRecord:(id)arg1;
- (void)_parseTXTRecord:(id)arg1 forVersion:(id)arg2 result:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoint;
- (unsigned long long)hash;
- (id)homeHash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)protocolVersion;

@end

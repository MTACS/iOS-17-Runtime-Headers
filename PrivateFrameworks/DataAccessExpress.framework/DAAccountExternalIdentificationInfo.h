
@interface DAAccountExternalIdentificationInfo : NSObject {
    NSString * _host;
    NSArray * _ownerAddresses;
    long long  _port;
    NSString * _preferredOwnerAddress;
    bool  _useSSL;
}

@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly, copy) NSArray *ownerAddresses;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly, copy) NSString *preferredOwnerAddress;
@property (nonatomic, readonly) bool useSSL;

- (void).cxx_destruct;
- (id)host;
- (id)initWithHost:(id)arg1 port:(long long)arg2 useSSL:(bool)arg3 ownerAddresses:(id)arg4 preferredOwnerAddress:(id)arg5;
- (id)ownerAddresses;
- (long long)port;
- (id)preferredOwnerAddress;
- (bool)useSSL;

@end

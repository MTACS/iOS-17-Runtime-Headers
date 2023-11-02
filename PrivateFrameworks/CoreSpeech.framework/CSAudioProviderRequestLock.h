
@interface CSAudioProviderRequestLock : NSObject {
    NSString * _UUIDString;
    unsigned long long  _clientIdentity;
}

@property (nonatomic, readonly) NSString *UUIDString;
@property (nonatomic, readonly) unsigned long long clientIdentity;

- (void).cxx_destruct;
- (id)UUIDString;
- (unsigned long long)clientIdentity;
- (id)initWithClientIdentity:(unsigned long long)arg1;

@end

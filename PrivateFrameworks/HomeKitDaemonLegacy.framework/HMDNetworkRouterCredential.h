
@interface HMDNetworkRouterCredential : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _macAddress;
    NSData * _psk;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *macAddress;
@property (nonatomic, retain) NSData *psk;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithMacAddress:(id)arg1 psk:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)psk;
- (id)serializeWithError:(id*)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setPsk:(id)arg1;

@end

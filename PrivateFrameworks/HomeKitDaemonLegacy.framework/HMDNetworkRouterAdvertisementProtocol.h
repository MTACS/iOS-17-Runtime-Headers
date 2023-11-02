
@interface HMDNetworkRouterAdvertisementProtocol : NSObject <HAPTLVProtocol, NSCopying> {
    long long  _advertisementProtocol;
}

@property (nonatomic) long long advertisementProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)protocolFromFirewallRuleAdvertisingProtocol:(unsigned char)arg1;

- (long long)advertisementProtocol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithAdvertisementProtocol:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAdvertisementProtocol:(long long)arg1;

@end


@interface HMDNetworkRouterIPAddress : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _v4;
    NSData * _v6;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *v4;
@property (nonatomic, retain) NSData *v6;

+ (id)ipAddressFromNetAddress:(id)arg1 error:(id*)arg2;
+ (id)ipAddressFromRuleAddress:(id)arg1 allowWildcard:(bool)arg2;
+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithV4:(id)arg1 v6:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setV4:(id)arg1;
- (void)setV6:(id)arg1;
- (id)v4;
- (id)v6;

@end

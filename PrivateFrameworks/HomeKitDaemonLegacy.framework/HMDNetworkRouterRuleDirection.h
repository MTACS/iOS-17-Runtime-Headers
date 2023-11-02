
@interface HMDNetworkRouterRuleDirection : NSObject <HAPTLVProtocol, NSCopying> {
    long long  _direction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)directionFromLANDirection:(unsigned char)arg1;
+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)direction;
- (id)init;
- (id)initWithDirection:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setDirection:(long long)arg1;

@end

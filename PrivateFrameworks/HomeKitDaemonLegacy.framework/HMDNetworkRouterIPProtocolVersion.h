
@interface HMDNetworkRouterIPProtocolVersion : NSObject <HAPTLVProtocol, NSCopying> {
    long long  _protocol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long protocol;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)protocolFromIPProtocolVersion:(unsigned char)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithProtocol:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (long long)protocol;
- (id)serializeWithError:(id*)arg1;
- (void)setProtocol:(long long)arg1;

@end

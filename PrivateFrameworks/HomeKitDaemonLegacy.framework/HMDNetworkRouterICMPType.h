
@interface HMDNetworkRouterICMPType : NSObject <HAPTLVProtocol, NSCopying> {
    HMDNetworkRouterIPProtocolVersion * _protocol;
    HAPTLVUnsignedNumberValue * _typeValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterIPProtocolVersion *protocol;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *typeValue;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)typeFromICMPType:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithProtocol:(id)arg1 typeValue:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)protocol;
- (id)serializeWithError:(id*)arg1;
- (void)setProtocol:(id)arg1;
- (void)setTypeValue:(id)arg1;
- (id)typeValue;

@end

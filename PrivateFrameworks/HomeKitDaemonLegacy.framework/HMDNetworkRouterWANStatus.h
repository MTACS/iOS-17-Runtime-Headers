
@interface HMDNetworkRouterWANStatus : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _identifier;
    HAPTLVUnsignedNumberValue * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *identifier;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *status;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 status:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end

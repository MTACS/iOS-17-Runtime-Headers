
@interface HAPDataStreamHAPControllerPayload : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _forceClose;
    NSData * _payload;
    HAPTLVUnsignedNumberValue * _sessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *forceClose;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *sessionIdentifier;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)forceClose;
- (id)init;
- (id)initWithPayload:(id)arg1 sessionIdentifier:(id)arg2 forceClose:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)payload;
- (id)serializeWithError:(id*)arg1;
- (id)sessionIdentifier;
- (void)setForceClose:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end

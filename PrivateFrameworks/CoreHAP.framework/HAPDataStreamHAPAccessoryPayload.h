
@interface HAPDataStreamHAPAccessoryPayload : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _accessoryRequestToSend;
    HAPTLVUnsignedNumberValue * _forceClose;
    NSData * _payload;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *accessoryRequestToSend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *forceClose;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *payload;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)accessoryRequestToSend;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)forceClose;
- (id)init;
- (id)initWithPayload:(id)arg1 forceClose:(id)arg2 accessoryRequestToSend:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)payload;
- (id)serializeWithError:(id*)arg1;
- (void)setAccessoryRequestToSend:(id)arg1;
- (void)setForceClose:(id)arg1;
- (void)setPayload:(id)arg1;

@end

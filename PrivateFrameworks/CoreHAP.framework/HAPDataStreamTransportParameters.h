
@interface HAPDataStreamTransportParameters : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _sessionIdentifier;
    HAPTLVUnsignedNumberValue * _tcpListeningPort;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *tcpListeningPort;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTcpListeningPort:(id)arg1 sessionIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (id)sessionIdentifier;
- (void)setSessionIdentifier:(id)arg1;
- (void)setTcpListeningPort:(id)arg1;
- (id)tcpListeningPort;

@end

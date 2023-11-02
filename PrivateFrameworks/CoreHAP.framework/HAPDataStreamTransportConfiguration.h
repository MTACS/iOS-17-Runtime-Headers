
@interface HAPDataStreamTransportConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _maximumControllerTransportMTU;
    HAPDataStreamTransportProtocolWrapper * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *maximumControllerTransportMTU;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPDataStreamTransportProtocolWrapper *transport;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTransport:(id)arg1 maximumControllerTransportMTU:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)maximumControllerTransportMTU;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setMaximumControllerTransportMTU:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end

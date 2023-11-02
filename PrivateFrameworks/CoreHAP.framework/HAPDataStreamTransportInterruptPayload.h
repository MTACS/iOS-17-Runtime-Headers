
@interface HAPDataStreamTransportInterruptPayload : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _dataStreamTransportInterruptSequenceNumber;
    NSData * _requestToSendIdentifiers;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *dataStreamTransportInterruptSequenceNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *requestToSendIdentifiers;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataStreamTransportInterruptSequenceNumber;
- (id)description;
- (id)init;
- (id)initWithRequestToSendIdentifiers:(id)arg1 dataStreamTransportInterruptSequenceNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)requestToSendIdentifiers;
- (id)serializeWithError:(id*)arg1;
- (void)setDataStreamTransportInterruptSequenceNumber:(id)arg1;
- (void)setRequestToSendIdentifiers:(id)arg1;

@end

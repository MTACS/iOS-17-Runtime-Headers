
@interface HAPDataStreamTransportSetup : NSObject <HAPTLVProtocol, NSCopying> {
    HAPDataStreamTransportCommandWrapper * _command;
    NSData * _controllerKeySalt;
    HAPDataStreamTransportProtocolWrapper * _transportType;
}

@property (nonatomic, retain) HAPDataStreamTransportCommandWrapper *command;
@property (nonatomic, retain) NSData *controllerKeySalt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPDataStreamTransportProtocolWrapper *transportType;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)command;
- (id)controllerKeySalt;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithCommand:(id)arg1 transportType:(id)arg2 controllerKeySalt:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setCommand:(id)arg1;
- (void)setControllerKeySalt:(id)arg1;
- (void)setTransportType:(id)arg1;
- (id)transportType;

@end

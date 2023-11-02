
@interface HAPDataStreamTransportSetupResponse : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _accessoryKeySalt;
    HAPDataStreamTransportParameters * _parameters;
    HAPDataStreamTransportCommandStatusWrapper * _status;
}

@property (nonatomic, retain) NSData *accessoryKeySalt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPDataStreamTransportParameters *parameters;
@property (nonatomic, retain) HAPDataStreamTransportCommandStatusWrapper *status;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)accessoryKeySalt;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithStatus:(id)arg1 parameters:(id)arg2 accessoryKeySalt:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAccessoryKeySalt:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end


@interface HAPFirmwareUpdateStatus : NSObject <HAPTLVProtocol, NSCopying> {
    NSString * _stagedFirmwareVersion;
    HAPFirmwareUpdateStateWrapper * _state;
    HAPTLVUnsignedNumberValue * _updateDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *stagedFirmwareVersion;
@property (nonatomic, retain) HAPFirmwareUpdateStateWrapper *state;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *updateDuration;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithState:(id)arg1 updateDuration:(id)arg2 stagedFirmwareVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setStagedFirmwareVersion:(id)arg1;
- (void)setState:(id)arg1;
- (void)setUpdateDuration:(id)arg1;
- (id)stagedFirmwareVersion;
- (id)state;
- (id)updateDuration;

@end

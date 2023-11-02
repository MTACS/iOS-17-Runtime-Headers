
@interface HAP2AccessoryServerMetadata : HAP2LoggingObject <HAP2AccessoryServerMetadata> {
    unsigned long long  _category;
    unsigned short  _configNumber;
    HAPDeviceID * _deviceID;
    bool  _hasPairings;
    NSString * _model;
    NSString * _name;
    HMFVersion * _protocolVersion;
    NSData * _setupHash;
    unsigned short  _stateNumber;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned short configNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HAPDeviceID *deviceID;
@property (nonatomic, readonly) bool hasPairings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) HMFVersion *protocolVersion;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, readonly) unsigned short stateNumber;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (unsigned long long)category;
- (unsigned short)configNumber;
- (id)deviceID;
- (bool)hasPairings;
- (id)init;
- (id)initWithDeviceID:(id)arg1 hasPairings:(bool)arg2 protocolVersion:(id)arg3 name:(id)arg4 model:(id)arg5 category:(unsigned long long)arg6 stateNumber:(unsigned short)arg7 configNumber:(unsigned short)arg8 setupHash:(id)arg9;
- (id)model;
- (id)name;
- (id)protocolVersion;
- (id)setupHash;
- (unsigned short)stateNumber;

@end

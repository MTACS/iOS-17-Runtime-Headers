
@interface HAPAccessoryProtocolInfo : HMFObject {
    unsigned short  _categoryIdentifier;
    NSNumber * _currentConfigNumber;
    NSNumber * _currentStateNumber;
    NSString * _deviceIdentifier;
    unsigned char  _featureFlags;
    NSString * _modelName;
    HMFVersion * _protocolVersion;
    NSData * _setupHash;
    unsigned char  _statusFlags;
}

@property (nonatomic, readonly) unsigned short categoryIdentifier;
@property (nonatomic, readonly) NSNumber *currentConfigNumber;
@property (nonatomic, readonly) NSNumber *currentStateNumber;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) unsigned char featureFlags;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) HMFVersion *protocolVersion;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, readonly) unsigned char statusFlags;

- (void).cxx_destruct;
- (unsigned short)categoryIdentifier;
- (id)currentConfigNumber;
- (id)currentStateNumber;
- (id)deviceIdentifier;
- (unsigned char)featureFlags;
- (id)initWithIdentifier:(id)arg1 currentStateNumber:(id)arg2 currentConfigNumber:(id)arg3 modelName:(id)arg4 protocolVersion:(id)arg5 authMethods:(unsigned char)arg6 statusFlags:(unsigned char)arg7 categoryIdentifier:(unsigned short)arg8 setupHash:(id)arg9;
- (id)modelName;
- (id)protocolVersion;
- (id)setupHash;
- (unsigned char)statusFlags;

@end


@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    bool  _allowedToRunInMultitaskingMode;
    bool  _checkIfFileAlreadyExistForMFO;
    long long  _configurationID;
    bool  _configuresAppAudioSession;
    NSMutableArray * _connections;
    int  _continuityCameraClientDeviceClass;
    bool  _continuityCameraIsWired;
    bool  _isMultiCamSession;
    NSString * _sessionPreset;
    bool  _suppressVideoEffects;
    NSObject<OS_tcc_identity> * _tccIdentity;
    bool  _usesAppAudioSession;
    bool  _xctestAuthorizedToStealDevice;
}

@property (nonatomic) bool allowedToRunInMultitaskingMode;
@property (nonatomic) bool checkIfFileAlreadyExistForMFO;
@property (nonatomic) long long configurationID;
@property (nonatomic) bool configuresAppAudioSession;
@property (nonatomic, readonly) NSArray *connectionConfigurations;
@property (nonatomic) int continuityCameraClientDeviceClass;
@property (nonatomic) bool continuityCameraIsWired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMultiCamSession, nonatomic) bool multiCamSession;
@property (nonatomic, retain) NSString *sessionPreset;
@property (nonatomic, readonly) NSArray *sinkConfigurations;
@property (nonatomic, readonly) NSArray *sourceConfigurations;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressVideoEffects;
@property (nonatomic, retain) NSObject<OS_tcc_identity> *tccIdentity;
@property (nonatomic) bool usesAppAudioSession;
@property (nonatomic) bool xctestAuthorizedToStealDevice;

+ (void)initialize;

- (void)addConnectionConfiguration:(id)arg1;
- (bool)allowedToRunInMultitaskingMode;
- (bool)checkIfFileAlreadyExistForMFO;
- (long long)configurationID;
- (bool)configuresAppAudioSession;
- (id)connectionConfigurations;
- (int)continuityCameraClientDeviceClass;
- (bool)continuityCameraIsWired;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMultiCamSession;
- (void)removeConnectionConfiguration:(id)arg1;
- (id)sessionPreset;
- (void)setAllowedToRunInMultitaskingMode:(bool)arg1;
- (void)setCheckIfFileAlreadyExistForMFO:(bool)arg1;
- (void)setConfigurationID:(long long)arg1;
- (void)setConfiguresAppAudioSession:(bool)arg1;
- (void)setContinuityCameraClientDeviceClass:(int)arg1;
- (void)setContinuityCameraIsWired:(bool)arg1;
- (void)setMultiCamSession:(bool)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)setSuppressVideoEffects:(bool)arg1;
- (void)setTccIdentity:(id)arg1;
- (void)setUsesAppAudioSession:(bool)arg1;
- (void)setXctestAuthorizedToStealDevice:(bool)arg1;
- (id)sinkConfigurations;
- (id)sourceConfigurations;
- (bool)suppressVideoEffects;
- (id)tccIdentity;
- (bool)usesAppAudioSession;
- (bool)xctestAuthorizedToStealDevice;

@end

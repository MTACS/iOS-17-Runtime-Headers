
@interface NIFindingConfiguration : NIConfiguration {
    bool  _cameraAssistanceEnabled;
    bool  _cameraAssistanceInClientProcess;
    long long  _configType;
    NSDictionary * _debugParameters;
    bool  _isFinder;
    bool  _isObserver;
    long long  _preferredUpdateRate;
    NIDiscoveryToken * _specifiedToken;
}

@property (getter=isCameraAssistanceEnabled, nonatomic) bool cameraAssistanceEnabled;
@property (getter=isCameraAssistanceInClientProcess, nonatomic) bool cameraAssistanceInClientProcess;
@property (nonatomic) long long configType;
@property (nonatomic, copy) NSDictionary *debugParameters;
@property (nonatomic, readonly, copy) NIDiscoveryToken *findingDiscoveryToken;
@property (nonatomic) bool isFinder;
@property (nonatomic) bool isObserver;
@property (nonatomic) long long preferredUpdateRate;
@property (nonatomic, readonly, copy) NIDiscoveryToken *sessionDiscoveryToken;
@property (nonatomic, copy) NIDiscoveryToken *specifiedToken;

+ (id)localDeviceConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initInternalWithConfigType:(long long)arg1 isFinder:(bool)arg2 isObserver:(bool)arg3 specifiedToken:(id)arg4 preferredUpdateRate:(long long)arg5;
- (bool)_internalIsCameraAssistanceEnabled;
- (bool)_internalIsCameraAssistanceInClientProcess;
- (bool)canUpdateToConfiguration:(id)arg1;
- (long long)configType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugParameters;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (id)findingDiscoveryToken;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRole:(long long)arg1 discoveryToken:(id)arg2 preferredUpdateRate:(long long)arg3;
- (bool)isCameraAssistanceEnabled;
- (bool)isCameraAssistanceInClientProcess;
- (bool)isEqual:(id)arg1;
- (bool)isFinder;
- (bool)isObserver;
- (long long)preferredUpdateRate;
- (id)sessionDiscoveryToken;
- (void)setCameraAssistanceEnabled:(bool)arg1;
- (void)setCameraAssistanceInClientProcess:(bool)arg1;
- (void)setConfigType:(long long)arg1;
- (void)setDebugParameters:(id)arg1;
- (void)setIsFinder:(bool)arg1;
- (void)setIsObserver:(bool)arg1;
- (void)setPreferredUpdateRate:(long long)arg1;
- (void)setSpecifiedToken:(id)arg1;
- (id)specifiedToken;

@end

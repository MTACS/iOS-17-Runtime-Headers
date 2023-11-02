
@interface SBSystemAction : NSObject <BSDescriptionStreamable> {
    bool  _cameraCaptureAction;
    bool  _canBePerformedInSetupMode;
    WFConfiguredStaccatoAction * _configuredAction;
    NSString * _hostBundleIdentifier;
    bool  _shouldBePerformedWhenSuppressed;
    bool  _shouldWakeScreenWhenPerformed;
}

@property (nonatomic, readonly) NSString *analyticsIdentifier;
@property (getter=isCameraCaptureAction, nonatomic, readonly) bool cameraCaptureAction;
@property (nonatomic, readonly) bool canBePerformedInSetupMode;
@property (nonatomic, readonly) WFConfiguredStaccatoAction *configuredAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hostBundleIdentifier;
@property (nonatomic, readonly) bool shouldBePerformedWhenSuppressed;
@property (nonatomic, readonly) bool shouldWakeScreenWhenPerformed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsIdentifier;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)canBePerformedInSetupMode;
- (id)configuredAction;
- (id)description;
- (unsigned long long)hash;
- (id)hostBundleIdentifier;
- (id)initWithConfiguredAction:(id)arg1;
- (bool)isCameraCaptureAction;
- (bool)isEqual:(id)arg1;
- (id)newExecutor;
- (bool)shouldBePerformedWhenSuppressed;
- (bool)shouldWakeScreenWhenPerformed;

@end

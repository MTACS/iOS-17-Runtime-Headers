
@interface TRAArbiterUpdateContext : NSObject <BSDescriptionProviding, TRAArbiterUpdateContextBuilding, TRASettingsActuationContextProviding> {
    <TRAArbiterDrawingDataSource> * __drawingConfigProvider;
    bool  __hasDefaultOrientationActuationContext;
    bool  _forceOrientationResolution;
    TRASettingsActuationContext * _orientationActuationContext;
    NSString * _reason;
    NSArray * _requestingParticipantsUniqueIdentifiers;
    TRASettingsActuationContext * _userInterfaceStyleActuationContext;
}

@property (setter=_setDrawingConfigurationProvider:, nonatomic) <TRAArbiterDrawingDataSource> *_drawingConfigProvider;
@property (nonatomic, readonly) bool _hasDefaultOrientationActuationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceOrientationResolution;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) TRASettingsActuationContext *orientationActuationContext;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, copy) NSArray *requestingParticipantsUniqueIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, copy) TRASettingsActuationContext *userInterfaceStyleActuationContext;

- (void).cxx_destruct;
- (id)_drawingConfigProvider;
- (bool)_hasDefaultOrientationActuationContext;
- (void)_setDrawingConfigurationProvider:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)forceOrientationResolution;
- (bool)hasAnyActuationContext;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)orientationActuationContext;
- (id)reason;
- (id)requestingParticipantsUniqueIdentifiers;
- (void)setForceOrientationResolution:(bool)arg1;
- (void)setOrientationActuationContext:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRequestingParticipantsUniqueIdentifiers:(id)arg1;
- (void)setUserInterfaceStyleActuationContext:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInterfaceStyleActuationContext;

@end

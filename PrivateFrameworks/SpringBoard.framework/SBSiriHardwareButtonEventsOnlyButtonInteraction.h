
@interface SBSiriHardwareButtonEventsOnlyButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction> {
    SBSiriHardwareButtonInteraction * _parentSiriInteraction;
    long long  _siriButtonIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBSiriHardwareButtonInteraction *parentSiriInteraction;
@property (nonatomic) long long siriButtonIdentifier;
@property (readonly) Class superclass;

+ (id)hardwareButtonInteractionForHomeButtonForwardingToInteraction:(id)arg1;

- (void).cxx_destruct;
- (bool)consumeSinglePressUp;
- (id)parentSiriInteraction;
- (void)setParentSiriInteraction:(id)arg1;
- (void)setSiriButtonIdentifier:(long long)arg1;
- (long long)siriButtonIdentifier;

@end

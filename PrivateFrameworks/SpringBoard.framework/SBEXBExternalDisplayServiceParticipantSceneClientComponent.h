
@interface SBEXBExternalDisplayServiceParticipantSceneClientComponent : FBSSceneComponent <SBEXBExternalDisplayServiceParticipant> {
    SBExternalDisplayDefaults * _defaults;
    SBExternalDisplayService * _externalDisplayService;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (getter=isExtendedDisplayCapable, nonatomic, readonly) bool extendedDisplayCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayConfiguration;
- (void)invalidate;
- (bool)isActive;
- (bool)isExtendedDisplayCapable;
- (void)scene:(id)arg1 didUpdateSettings:(id)arg2;
- (void)setScene:(id)arg1;

@end

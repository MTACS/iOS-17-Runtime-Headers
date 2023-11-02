
@interface CAMPostConfigurationSetupCommand : CAMCaptureCommand {
    CAMCaptureGraphConfiguration * _graphConfiguration;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *graphConfiguration;

- (void).cxx_destruct;
- (void)_configureControlCenterVideoEffectsForContext:(id)arg1;
- (void)_configureLivePhotoPreservationSuspension:(id)arg1;
- (void)_configureSmoothZoomingForContext:(id)arg1;
- (void)_configureVideoGreenGhostMitigationForContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)graphConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1;

@end

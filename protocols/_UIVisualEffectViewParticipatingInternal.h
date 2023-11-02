
@protocol _UIVisualEffectViewParticipatingInternal <_UIVisualEffectViewParticipating>

@required

- (bool)disableGroupFiltering;
- (void)setDisableGroupFiltering:(bool)arg1;
- (void)setSubviewMonitor:(id <_UIVisualEffectViewSubviewMonitoring>)arg1;
- (<_UIVisualEffectViewSubviewMonitoring> *)subviewMonitor;

@end

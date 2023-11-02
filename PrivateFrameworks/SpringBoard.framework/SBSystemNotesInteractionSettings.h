
@interface SBSystemNotesInteractionSettings : SBPIPInteractionSettings {
    double  _delayBeforeUserInteractionDismissesThumbnail;
}

@property (nonatomic) double delayBeforeUserInteractionDismissesThumbnail;

+ (id)settingsControllerModule;

- (double)delayBeforeUserInteractionDismissesThumbnail;
- (void)setDefaultValues;
- (void)setDelayBeforeUserInteractionDismissesThumbnail:(double)arg1;

@end

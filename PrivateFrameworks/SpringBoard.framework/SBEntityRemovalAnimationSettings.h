
@interface SBEntityRemovalAnimationSettings : PTSettings {
    SBEntityRemovalDosidoSlideOutUpwardAnimationSettings * _dosidoCommitIntentAnimationSettings;
    SBEntityRemovalDosidoSlideOutDownwardAnimationSettings * _dosidoDeclineIntentAnimationSettings;
    SBEntityRemovalDosidoDefaultAnimationSettings * _dosidoDeleteIntentAnimationSettings;
    SBEntityRemovalFloatingSlideOutUpwardAnimationSettings * _floatingCommitIntentAnimationSettings;
    SBEntityRemovalFloatingSlideOutDownwardAnimationSettings * _floatingDeclineIntentAnimationSettings;
    SBEntityRemovalFloatingDefaultAnimationSettings * _floatingDeleteIntentAnimationSettings;
    SBEntityRemovalMedusaSlideOutUpwardAnimationSettings * _medusaCommitIntentAnimationSettings;
    SBEntityRemovalMedusaSlideOutDownwardAnimationSettings * _medusaDeclineIntentAnimationSettings;
    SBEntityRemovalMedusaDefaultAnimationSettings * _medusaDeleteIntentAnimationSettings;
}

@property (nonatomic, retain) SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *dosidoCommitIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *dosidoDeclineIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalDosidoDefaultAnimationSettings *dosidoDeleteIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *floatingCommitIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *floatingDeclineIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalFloatingDefaultAnimationSettings *floatingDeleteIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *medusaCommitIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *medusaDeclineIntentAnimationSettings;
@property (nonatomic, retain) SBEntityRemovalMedusaDefaultAnimationSettings *medusaDeleteIntentAnimationSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)dosidoCommitIntentAnimationSettings;
- (id)dosidoDeclineIntentAnimationSettings;
- (id)dosidoDeleteIntentAnimationSettings;
- (id)floatingCommitIntentAnimationSettings;
- (id)floatingDeclineIntentAnimationSettings;
- (id)floatingDeleteIntentAnimationSettings;
- (id)medusaCommitIntentAnimationSettings;
- (id)medusaDeclineIntentAnimationSettings;
- (id)medusaDeleteIntentAnimationSettings;
- (void)setDosidoCommitIntentAnimationSettings:(id)arg1;
- (void)setDosidoDeclineIntentAnimationSettings:(id)arg1;
- (void)setDosidoDeleteIntentAnimationSettings:(id)arg1;
- (void)setFloatingCommitIntentAnimationSettings:(id)arg1;
- (void)setFloatingDeclineIntentAnimationSettings:(id)arg1;
- (void)setFloatingDeleteIntentAnimationSettings:(id)arg1;
- (void)setMedusaCommitIntentAnimationSettings:(id)arg1;
- (void)setMedusaDeclineIntentAnimationSettings:(id)arg1;
- (void)setMedusaDeleteIntentAnimationSettings:(id)arg1;

@end

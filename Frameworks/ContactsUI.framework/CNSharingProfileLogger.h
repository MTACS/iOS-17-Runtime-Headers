
@interface CNSharingProfileLogger : NSObject {
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (id)log;

- (void).cxx_destruct;
- (id)init;
- (id)log;
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1;
- (void)logOnboardingAddingContact;
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1;
- (void)logOnboardingErrorSavingContactWithDescription:(id)arg1;
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1;
- (void)logOnboardingErrorSavingMeCardPosterToRecentsWithDescription:(id)arg1;
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1;
- (void)logOnboardingReturningDefaultMonogram;
- (void)logOnboardingReturningEmptyImage;
- (void)logOnboardingReturningNonAnimojiItem;
- (void)logOnboardingReturningSharingResultWithDescription:(id)arg1;
- (void)logOnboardingSavingContact:(id)arg1;
- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1;
- (void)logOnboardingSavingMeCardPosterToRecentsForIdentifier:(id)arg1;
- (void)logOnboardingSettingMeContact;
- (void)logOnboardingSuccessSavingContact;
- (void)logOnboardingSuccessSavingMeCardImageToRecents;
- (void)logOnboardingSuccessSavingMeCardPosterToRecents;
- (void)logOnboardingUpdatingContactWithIdentifier:(id)arg1;
- (void)logSettingsErrorSavingContactWithDescription:(id)arg1;
- (void)logSettingsErrorSettingMeContactWithDescription:(id)arg1;
- (void)logSettingsReturningDefaultMonogram;
- (void)logSettingsReturningEmptyImage;
- (void)logSettingsReturningEmptyImageForNoChange;
- (void)logSettingsReturningSharingResultWithDescription:(id)arg1;
- (void)logSettingsSavingContact:(id)arg1;
- (void)logSettingsSettingMeContact;
- (void)logSettingsSuccessSavingContact;
- (void)setLog:(id)arg1;

@end

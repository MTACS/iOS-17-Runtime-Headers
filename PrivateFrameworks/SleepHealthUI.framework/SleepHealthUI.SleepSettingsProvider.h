
@interface SleepHealthUI.SleepSettingsProvider : NSObject <HKSPSleepStorePrivateObserver> {
    void currentSettingsPublisher;
    void currentSleepFocusConfigurationPublisher;
    void sleepStore;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sleepStore:(id)arg1 sleepFocusConfigurationDidUpdate:(id)arg2;
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;

@end


@interface HRElectrocardiogramWatchAppInstallability : NSObject {
    HKWatchAppAvailability * _ecgAppAvailability;
}

@property (nonatomic, retain) HKWatchAppAvailability *ecgAppAvailability;

+ (void)installElectrocardiogramAppOnActiveWatch:(id /* block */)arg1;
+ (bool)isElectrocardiogramAppDeletableForActiveWatch;

- (void).cxx_destruct;
- (void)checkElectrocardiogramAppInstallStateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)ecgAppAvailability;
- (void)electrocardiogramAppInstallStateOnActiveWatch:(id /* block */)arg1;
- (id)init;
- (id)installElectrocardiogramAppAlertController:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)setAllowInstallingElectrocardiogramWatchApp:(bool)arg1;
- (void)setEcgAppAvailability:(id)arg1;

@end

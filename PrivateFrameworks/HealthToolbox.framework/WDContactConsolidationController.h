
@interface WDContactConsolidationController : NSObject {
    id /* block */  _completionHandler;
    UIAlertController * _consolidationAlertController;
    HKHealthStore * _healthStore;
    _HKMedicalIDData * _medicalIDData;
    WDNotificationManager * _notificationManager;
    UIViewController * _presentingViewController;
    SOSContactsManager * _sosContactsManager;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) UIAlertController *consolidationAlertController;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, readonly) bool isPresentingConsolidationAlert;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDData;
@property (nonatomic, retain) WDNotificationManager *notificationManager;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) SOSContactsManager *sosContactsManager;

- (void).cxx_destruct;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (void)_showLearnMoreViewController;
- (void)checkAlertNecessity;
- (id /* block */)completionHandler;
- (id)consolidationAlertController;
- (id)healthStore;
- (id)initWithProfile:(id)arg1 presentingViewController:(id)arg2;
- (bool)isPresentingConsolidationAlert;
- (id)medicalIDData;
- (id)notificationManager;
- (void)presentContactConsolidationAlertWithCompletionHandler:(id /* block */)arg1;
- (void)presentContactsConsolidationAlert;
- (id)presentingViewController;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConsolidationAlertController:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSosContactsManager:(id)arg1;
- (id)sosContactsManager;

@end

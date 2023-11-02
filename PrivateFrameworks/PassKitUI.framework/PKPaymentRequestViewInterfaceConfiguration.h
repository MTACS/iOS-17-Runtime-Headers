
@interface PKPaymentRequestViewInterfaceConfiguration : NSObject {
    NSString * _applicationIdentifier;
    NSString * _bundleIdentifier;
    NSString * _localizedApplicationName;
    PKPaymentHardwareStatus * _paymentHardwareStatus;
    PKPaymentSheetExperiment * _paymentSheetExperiment;
    <PKPaymentAuthorizationPresenter> * _presenter;
    NSString * _relevantPassUniqueID;
    PKPaymentRequest * _request;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *localizedApplicationName;
@property (nonatomic, retain) PKPaymentHardwareStatus *paymentHardwareStatus;
@property (nonatomic, retain) PKPaymentSheetExperiment *paymentSheetExperiment;
@property (nonatomic) <PKPaymentAuthorizationPresenter> *presenter;
@property (nonatomic, retain) NSString *relevantPassUniqueID;
@property (nonatomic, retain) PKPaymentRequest *request;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)bundleIdentifier;
- (id)init;
- (id)localizedApplicationName;
- (id)paymentHardwareStatus;
- (id)paymentSheetExperiment;
- (id)presenter;
- (id)relevantPassUniqueID;
- (id)request;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLocalizedApplicationName:(id)arg1;
- (void)setPaymentHardwareStatus:(id)arg1;
- (void)setPaymentSheetExperiment:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setRelevantPassUniqueID:(id)arg1;
- (void)setRequest:(id)arg1;

@end

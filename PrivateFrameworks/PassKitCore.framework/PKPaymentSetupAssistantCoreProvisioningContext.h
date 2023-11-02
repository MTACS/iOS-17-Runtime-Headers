
@interface PKPaymentSetupAssistantCoreProvisioningContext : NSObject <PKPaymentProvisioningControllerDelegate> {
    unsigned long long  _maximumSelectable;
    NSMutableIndexSet * _mutableSelectedIndices;
    PKPaymentProvisioningController * _provisioningController;
    NSArray * _setupAssistantCoreCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, readonly, retain) NSIndexSet *selectedIndices;
@property (nonatomic, readonly, retain) NSArray *setupAssistantCoreCredentials;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availablePaymentCredentials;
- (bool)canSelectIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithProvisioningController:(id)arg1 setupAssistantCredentials:(id)arg2 maximumSelectable:(unsigned long long)arg3;
- (id)provisioningController;
- (bool)selectIndex:(unsigned long long)arg1;
- (id)selectedCredentials;
- (id)selectedIndices;
- (id)setupAssistantCoreCredentials;

@end

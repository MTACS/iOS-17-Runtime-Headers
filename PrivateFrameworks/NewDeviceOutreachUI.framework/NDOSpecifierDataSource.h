
@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {
    PSSpecifier * _coverageSpecifier;
    NSObject<OS_dispatch_group> * _group;
    NDOACController * _hostingController;
    bool  _isDefaultDevice;
    NDOManager * _ndoManager;
    NSMutableArray * _ndoSpecifiers;
    NSObject<OS_dispatch_queue> * _policyLookupQueue;
    NSString * _serialNumber;
    PSSpecifier * _warrantyGroupSpecifier;
}

@property (nonatomic, retain) PSSpecifier *coverageSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NDOACController *hostingController;
@property bool isDefaultDevice;
@property (nonatomic, retain) NDOManager *ndoManager;
@property (nonatomic, retain) NSMutableArray *ndoSpecifiers;
@property (nonatomic, retain) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSSpecifier *warrantyGroupSpecifier;

- (void).cxx_destruct;
- (void)_updateSpecifiers:(id)arg1 specifierToInsertAfter:(id)arg2 withUpdates:(id)arg3;
- (id)acController;
- (id)coverageSpecifier;
- (id)deviceDescriptionSpecifierWithDeviceInfo:(id)arg1;
- (id)hostingController;
- (id)initWithDefaultDevice:(bool)arg1;
- (bool)isDefaultDevice;
- (void)loadSpecifiers;
- (void)ndoAppleCareCoveragePressed:(id)arg1;
- (id)ndoManager;
- (id)ndoSpecifiers;
- (void)outreachFinishedForDeviceWithSerialNumber:(id)arg1 withCompletion:(unsigned long long)arg2;
- (id)serialNumber;
- (void)setCoverageSpecifier:(id)arg1;
- (void)setHostingController:(id)arg1;
- (void)setIsDefaultDevice:(bool)arg1;
- (void)setNdoManager:(id)arg1;
- (void)setNdoSpecifiers:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setWarrantyGroupSpecifier:(id)arg1;
- (void)specifiersWithPolicy:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateNDOSpecifiersWithPolicy:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)warrantyDetailText:(id)arg1;
- (id)warrantyGroupSpecifier;
- (id)warrantySpecifiersFromDeviceInfo:(id)arg1;

@end

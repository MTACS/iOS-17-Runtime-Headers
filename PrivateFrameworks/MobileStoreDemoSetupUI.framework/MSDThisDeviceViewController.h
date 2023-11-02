
@interface MSDThisDeviceViewController : UIViewController <UITableViewDataSource> {
    NSString * _deviceModel;
    NSString * _osString;
    NSString * _serialNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *osString;
@property (nonatomic, retain) NSString *serialNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deviceModel;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)osString;
- (id)serialNumber;
- (void)setDeviceModel:(id)arg1;
- (void)setOsString:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

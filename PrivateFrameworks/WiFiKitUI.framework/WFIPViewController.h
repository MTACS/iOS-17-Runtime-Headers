
@interface WFIPViewController : WFInsetTableViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _addresses;
    WFAppearanceProxy * _appearanceProxy;
    NSArray * _prefixes;
}

@property (nonatomic, retain) NSArray *addresses;
@property (nonatomic, retain) WFAppearanceProxy *appearanceProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *prefixes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addresses;
- (id)appearanceProxy;
- (id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2;
- (id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2 appearanceProxy:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)prefixes;
- (void)setAddresses:(id)arg1;
- (void)setAppearanceProxy:(id)arg1;
- (void)setPrefixes:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

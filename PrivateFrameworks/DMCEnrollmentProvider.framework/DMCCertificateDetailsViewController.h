
@interface DMCCertificateDetailsViewController : DMCProfileTableViewController {
    id  _certificateTrust;
    NSArray * _keyValueSectionTitles;
    NSArray * _keyValueSections;
}

@property (nonatomic, retain) id certificateTrust;
@property (nonatomic, retain) NSArray *keyValueSectionTitles;
@property (nonatomic, retain) NSArray *keyValueSections;

- (void).cxx_destruct;
- (void)_setup;
- (id)certificateTrust;
- (id)init;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)keyValueSectionTitles;
- (id)keyValueSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCertificateTrust:(id)arg1;
- (void)setKeyValueSectionTitles:(id)arg1;
- (void)setKeyValueSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end

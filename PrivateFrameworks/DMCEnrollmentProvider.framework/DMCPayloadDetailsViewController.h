
@interface DMCPayloadDetailsViewController : DMCProfileTableViewController {
    NSArray * _keyValueSections;
    MCPayload * _payload;
    DMCPayloadViewModel * _payloadViewModel;
}

@property (nonatomic, retain) NSArray *keyValueSections;
@property (nonatomic, retain) MCPayload *payload;
@property (nonatomic, retain) DMCPayloadViewModel *payloadViewModel;

- (void).cxx_destruct;
- (id)_keyValueSectionForSection:(long long)arg1;
- (void)_setTitle:(id)arg1 keyValueSections:(id)arg2;
- (void)_setup;
- (id)initWithPayload:(id)arg1;
- (id)initWithPayloadViewModel:(id)arg1;
- (id)keyValueSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)payload;
- (id)payloadViewModel;
- (void)setKeyValueSections:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadViewModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end

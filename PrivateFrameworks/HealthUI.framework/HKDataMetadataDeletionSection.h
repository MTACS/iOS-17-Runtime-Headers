
@interface HKDataMetadataDeletionSection : HKDataMetadataSection {
    UITableViewCell * _cell;
    <HKDataMetadataDeletionSectionDelegate> * _delegate;
    bool  _enabled;
    NSString * _title;
}

@property (nonatomic, retain) UITableViewCell *cell;
@property (nonatomic) <HKDataMetadataDeletionSectionDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_updateCellForEnabledState;
- (id)cell;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)delegate;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (bool)isEnabled;
- (unsigned long long)numberOfRowsInSection;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

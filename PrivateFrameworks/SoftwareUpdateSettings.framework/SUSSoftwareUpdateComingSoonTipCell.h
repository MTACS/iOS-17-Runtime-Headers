
@interface SUSSoftwareUpdateComingSoonTipCell : PSTableCell <SUSSoftwareUpdateCellProtocol> {
    int  _state;
    TPKTipContentTableViewCell * _tipkitCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) TPKTipContentTableViewCell *tipkitCell;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (double)preferredHeightWithTable:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTipkitCell:(id)arg1;
- (int)state;
- (id)tipkitCell;
- (void)updateConstraints;

@end

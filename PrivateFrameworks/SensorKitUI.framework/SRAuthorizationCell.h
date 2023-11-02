
@interface SRAuthorizationCell : UITableViewCell {
    <SRAuthorizationCellDelegate> * _delegate;
    NSIndexPath * _indexPath;
    UISwitch * _toggle;
}

@property (nonatomic) <SRAuthorizationCellDelegate> *delegate;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, retain) UISwitch *toggle;

+ (id)authorizationCellForIndexPath:(id)arg1 title:(id)arg2 state:(id)arg3 delegate:(id)arg4 tableView:(id)arg5;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)indexPath;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setToggle:(id)arg1;
- (void)switchChanged;
- (id)toggle;

@end

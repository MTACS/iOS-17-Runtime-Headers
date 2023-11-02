
@interface ICQUIInlineTipRow : RUITableViewRow {
    UITableViewCell * _tableCell;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _tableCellLock;
    UIView * _tipView;
}

@property (nonatomic, retain) UIView *tipView;

- (void).cxx_destruct;
- (id)init;
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (void)setTipView:(id)arg1;
- (id)tableCell;
- (id)tipView;

@end

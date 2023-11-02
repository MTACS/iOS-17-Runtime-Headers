
@interface HUDownloadControlCell : UITableViewCell <HUCellProtocol> {
    HUDownloadControl * _downloadControl;
    HFItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUDownloadControl *downloadControl;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)downloadControl;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)layoutSubviews;
- (void)setDownloadControl:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setItem:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)updateUIWithAnimation:(bool)arg1;

@end

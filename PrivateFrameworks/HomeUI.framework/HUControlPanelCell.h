
@interface HUControlPanelCell : UITableViewCell <HUCellProtocol> {
    HFItem * _item;
    NSLayoutConstraint * _minHeightConstraint;
}

@property (nonatomic, readonly) NSSet *allControlViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) NSLayoutConstraint *minHeightConstraint;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allControlViews;
- (id)item;
- (id)minHeightConstraint;
- (void)setItem:(id)arg1;
- (void)setMinHeightConstraint:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end

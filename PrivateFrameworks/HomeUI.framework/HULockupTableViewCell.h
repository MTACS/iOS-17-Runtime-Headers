
@interface HULockupTableViewCell : UITableViewCell <HUCellProtocol, HULockupInternalResizingDelegate> {
    HULockupView * _lockupView;
    <HUResizableCellDelegate> * _resizingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, readonly) HULockupView *lockupView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didUpdateRequiredHeightForLockupView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)lockupView;
- (Class)lockupViewClass;
- (id)resizingDelegate;
- (void)setItem:(id)arg1;
- (void)setResizingDelegate:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end

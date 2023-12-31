
@protocol HUCellProtocol <NSObject>

@required

- (HFItem *)item;
- (void)setItem:(HFItem *)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@optional

- (<HUResizableCellDelegate> *)resizingDelegate;
- (void)setResizingDelegate:(id <HUResizableCellDelegate>)arg1;

@end

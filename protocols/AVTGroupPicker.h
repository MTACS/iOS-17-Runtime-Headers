
@protocol AVTGroupPicker <NSObject>

@required

- (<AVTGroupPickerDelegate> *)delegate;
- (NSArray *)groupItems;
- (id)initWithCoder:(NSCoder *)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithGroupItems:(NSArray *)arg1 environment:(AVTUIEnvironment *)arg2;
- (void)reloadData;
- (long long)selectedGroupIndex;
- (void)setDelegate:(id <AVTGroupPickerDelegate>)arg1;
- (void)setSelectedGroupIndex:(long long)arg1;
- (void)setSelectedGroupIndex:(long long)arg1 animated:(bool)arg2;

@end

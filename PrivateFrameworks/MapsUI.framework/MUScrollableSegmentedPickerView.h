
@interface MUScrollableSegmentedPickerView : MUPassthroughView <MUScrollableSegmentedPickerContentViewDelegate> {
    MUScrollableSegmentedPickerContentView * _contentView;
    <MUScrollableSegmentedPickerViewDelegate> * _delegate;
    NSLayoutConstraint * _widthConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUScrollableSegmentedPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewModels;

- (void).cxx_destruct;
- (void)_setupContentView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)segmentedPickerContentViewDidUpdateSelection:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setViewModels:(id)arg1;
- (id)viewModels;

@end

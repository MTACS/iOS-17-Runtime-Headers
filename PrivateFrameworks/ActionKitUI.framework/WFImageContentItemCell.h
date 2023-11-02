
@interface WFImageContentItemCell : UITableViewCell {
    NSMapTable * _activityIndicators;
    <WFImageContentItemCellDelegate> * _delegate;
    NSMutableArray * _imageViews;
    NSArray * _items;
    NSMutableArray * _selectedImageViews;
}

@property (nonatomic) <WFImageContentItemCellDelegate> *delegate;
@property (nonatomic, copy) NSArray *items;

- (void).cxx_destruct;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)imageViewTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)items;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelected:(bool)arg1 atIndex:(unsigned long long)arg2;

@end

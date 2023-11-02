
@interface _UICollectionViewListAccessoryControl : UIControl <_UICollectionViewListDetailAccessoryView> {
    UIColor * _accessoryBackgroundColor;
    UIColor * _accessoryTintColor;
    id /* block */  _actionHandler;
    <UITableConstants> * _constants;
    UIImageView * _imageView;
    bool  _needsImageViewUpdate;
    long long  _type;
}

@property (nonatomic, retain) UIColor *accessoryBackgroundColor;
@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) <UITableConstants> *constants;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_executeActionHandler;
- (id)_renderedImage;
- (void)_setNeedsImageViewUpdate;
- (void)_updateImageViewIfNeeded;
- (id)accessoryBackgroundColor;
- (id)accessoryTintColor;
- (id /* block */)actionHandler;
- (id)constants;
- (id)initWithType:(long long)arg1 constants:(id)arg2;
- (void)layoutSubviews;
- (void)setAccessoryBackgroundColor:(id)arg1;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setConstants:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)type;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

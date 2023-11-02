
@interface CSProminentEmptyElementView : CSProminentElementView {
    UIView * _contentView;
}

@property (nonatomic) UIView *contentView;

- (void)_layoutContentIfNeeded;
- (id)contentView;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;

@end


@interface ABCarouselItemView : UIView {
    UIImageView * _imageView;
    ABCarouselItem * _item;
    <UITraitChangeRegistration> * _traitRegistration;
}

@property (nonatomic, retain) ABCarouselItem *item;

- (void).cxx_destruct;
- (void)_setupImageView;
- (void)_updateForLayoutDirection;
- (void)didMoveToWindow;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;

@end

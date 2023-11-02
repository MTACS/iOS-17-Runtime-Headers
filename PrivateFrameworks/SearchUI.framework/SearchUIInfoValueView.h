
@interface SearchUIInfoValueView : NUIContainerStackView {
    SFCommandButtonItem * _buttonItem;
    SearchUIImageView * _imageView;
    TLKLabel * _valueLabel;
}

@property (nonatomic, retain) SFCommandButtonItem *buttonItem;
@property (nonatomic, retain) SearchUIImageView *imageView;
@property (nonatomic, retain) TLKLabel *valueLabel;

- (void).cxx_destruct;
- (id)buttonItem;
- (id)imageView;
- (id)init;
- (void)setButtonItem:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)updateIsInteractable:(bool)arg1;
- (void)updateWithString:(id)arg1 image:(id)arg2;
- (id)valueLabel;

@end

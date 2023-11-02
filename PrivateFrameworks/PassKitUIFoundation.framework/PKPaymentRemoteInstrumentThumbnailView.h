
@interface PKPaymentRemoteInstrumentThumbnailView : UIView {
    UIImageView * _cardImageView;
    UIImageView * _placeholderImageView;
}

@property (nonatomic, retain) UIImageView *cardImageView;
@property (nonatomic, retain) UIImageView *placeholderImageView;

- (void).cxx_destruct;
- (void)_prepareConstraints;
- (void)_updateCardImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)cardImageView;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2;
- (id)placeholderImageView;
- (void)setCardImageView:(id)arg1;
- (void)setPlaceholderImageView:(id)arg1;

@end

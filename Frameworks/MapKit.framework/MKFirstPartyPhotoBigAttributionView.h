
@interface MKFirstPartyPhotoBigAttributionView : MKPhotoBigAttributionView <MKPhotoBigAttributionViewSubclass> {
    UIImageView * _glyphView;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImage *glyphImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleText;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)didEndAnimatingActivityIndicatorView;
- (void)didUpdateAttributionViewType;
- (void)didUpdateMapItem;
- (id)glyphImage;
- (id)initWithContext:(long long)arg1;
- (id)titleText;
- (void)willStartAnimatingActivityIndicatorView;

@end

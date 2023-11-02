
@interface RUICustomLinkTableViewCell : RemoteUITableViewCell {
    UIImageView * _customImageViewInternal;
    UILabel * _customLinkDetailTextLabelInternal;
    UILabel * _customLinkSubLabelInternal;
    UILabel * _customLinkTextLabelInternal;
    UIButton * _detailLinkButton;
    id /* block */  _detailLinkHandler;
    UIStackView * _innerStackView;
    UIStackView * _stackView;
}

@property (nonatomic, retain) UIImageView *customImageViewInternal;
@property (nonatomic, readonly) UILabel *customLinkDetailTextLabel;
@property (nonatomic, retain) UILabel *customLinkDetailTextLabelInternal;
@property (nonatomic, readonly) UIImageView *customLinkImageView;
@property (nonatomic, readonly) UILabel *customLinkSubLabel;
@property (nonatomic, retain) UILabel *customLinkSubLabelInternal;
@property (nonatomic, readonly) UILabel *customLinkTextLabel;
@property (nonatomic, retain) UILabel *customLinkTextLabelInternal;
@property (nonatomic, retain) UIStackView *innerStackView;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_detailLinkPressed;
- (id)_detailTextLabelInternal;
- (id)_imageViewInternal;
- (void)_initializeViews;
- (id)_subLabelInternal;
- (id)_textLabelInternal;
- (void)addDetailLinkButton:(id)arg1;
- (id)customImageViewInternal;
- (id)customLinkDetailTextLabel;
- (id)customLinkDetailTextLabelInternal;
- (id)customLinkImageView;
- (id)customLinkSubLabel;
- (id)customLinkSubLabelInternal;
- (id)customLinkTextLabel;
- (id)customLinkTextLabelInternal;
- (id)innerStackView;
- (void)layoutSubviews;
- (void)setCustomImageViewInternal:(id)arg1;
- (void)setCustomLinkDetailTextLabelInternal:(id)arg1;
- (void)setCustomLinkSubLabelInternal:(id)arg1;
- (void)setCustomLinkTextLabelInternal:(id)arg1;
- (void)setDetailLinkText:(id)arg1 handler:(id /* block */)arg2;
- (void)setInnerStackView:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end

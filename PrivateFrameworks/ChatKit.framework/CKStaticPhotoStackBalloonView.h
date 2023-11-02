
@interface CKStaticPhotoStackBalloonView : CKBalloonView {
    NSArray * _mediaObjects;
    CKStaticImageStackView * _stackView;
}

@property (nonatomic, retain) NSArray *mediaObjects;
@property (nonatomic, retain) CKStaticImageStackView *stackView;

- (void).cxx_destruct;
- (void)configureForMessagePart:(id)arg1;
- (void)layoutSubviews;
- (id)mediaObjects;
- (void)prepareForDisplay;
- (void)setMediaObjects:(id)arg1;
- (void)setStackView:(id)arg1;
- (double)stackCornerRadius;
- (id)stackView;

@end

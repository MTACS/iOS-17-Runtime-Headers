
@interface AppleMediaServicesUIDynamic.ArtworkImageView : AMSUICommonView {
    void artworkSize;
    void backgroundView;
    void darkArtwork;
    void lightArtwork;
    void objectGraph;
    void underlyingImageView;
}

@property (nonatomic, readonly) bool amsuid_wantsArtworkStyle;
@property (nonatomic, readonly) bool hasContent;

- (void).cxx_destruct;
- (bool)amsuid_wantsArtworkStyle;
- (bool)hasContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end

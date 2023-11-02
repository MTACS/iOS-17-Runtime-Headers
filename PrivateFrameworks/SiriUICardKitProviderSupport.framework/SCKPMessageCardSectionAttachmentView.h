
@interface SCKPMessageCardSectionAttachmentView : UIView <LPLinkViewDelegate> {
    unsigned long long  _alignmentStyle;
    <SCKPMessageCardSectionAttachmentViewDelegate> * _delegate;
    LPLinkMetadata * _fullMetadata;
    SCKPGradientView * _gradientView;
    UIView * _imageContainer;
    UIImageView * _imageView;
    LPLinkView * _linkView;
    UIImageView * _livePhotoBadge;
    UILabel * _videoDurationLabel;
}

@property unsigned long long alignmentStyle;
@property (readonly, copy) NSString *debugDescription;
@property <SCKPMessageCardSectionAttachmentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) LPLinkMetadata *fullMetadata;
@property (retain) SCKPGradientView *gradientView;
@property (readonly) unsigned long long hash;
@property (retain) UIView *imageContainer;
@property (retain) UIImageView *imageView;
@property (retain) LPLinkView *linkView;
@property (retain) UIImageView *livePhotoBadge;
@property (readonly) Class superclass;
@property (retain) UILabel *videoDurationLabel;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_linkViewMetadataDidBecomeComplete:(id)arg1;
- (void)_loadAttachment:(id)arg1;
- (void)_loadAttachmentFromFileURL:(id)arg1 type:(int)arg2;
- (void)_loadLinkWith:(id)arg1 metadata:(id)arg2;
- (id)_thumbnailImageForVideoURL:(id)arg1;
- (struct CGSize { double x1; double x2; })_translateImageSizeForMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_videoDurationStringForVideoURL:(id)arg1;
- (unsigned long long)alignmentStyle;
- (id)delegate;
- (id)fullMetadata;
- (id)gradientView;
- (id)imageContainer;
- (id)imageView;
- (id)initWithAttachment:(id)arg1;
- (void)layoutSubviews;
- (id)linkView;
- (id)livePhotoBadge;
- (void)setAlignmentStyle:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullMetadata:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setImageContainer:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLinkView:(id)arg1;
- (void)setLivePhotoBadge:(id)arg1;
- (void)setVideoDurationLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)videoDurationLabel;

@end

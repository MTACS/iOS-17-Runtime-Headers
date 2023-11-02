
@interface CAMPreviewAlignmentGuide : UIView <CAMPreviewAlignmentModelObserver> {
    CAMLevelCrosshair * __guidanceCrosshair;
    CAMLevelCrosshair * __targetCrosshair;
    CAMPreviewAlignmentModel * _alignmentModel;
}

@property (nonatomic, readonly) CAMLevelCrosshair *_guidanceCrosshair;
@property (nonatomic, readonly) CAMLevelCrosshair *_targetCrosshair;
@property (nonatomic, readonly) CAMPreviewAlignmentModel *alignmentModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_guidanceCrosshair;
- (id)_targetCrosshair;
- (id)alignmentModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)previewAlignmentModelDidChangeAlignmentTransform:(id)arg1;
- (void)previewAlignmentModelDidChangeOpacity:(id)arg1;

@end

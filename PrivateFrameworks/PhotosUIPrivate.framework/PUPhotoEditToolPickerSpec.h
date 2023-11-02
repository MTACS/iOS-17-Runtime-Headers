
@interface PUPhotoEditToolPickerSpec : PUViewControllerSpec {
    double  _dashSelectionIndicatorDistance;
    double  _dotSelectionIndicatorDistance;
    double  _horizontalToolBottomSpacing;
    double  _horizontalToolTopSpacing;
    double  _toolButtonPointerInteractionHighlightPadding;
    double  _toolParentViewEdgeSpacing;
}

@property (nonatomic) double dashSelectionIndicatorDistance;
@property (nonatomic) double dotSelectionIndicatorDistance;
@property (nonatomic) double horizontalToolBottomSpacing;
@property (nonatomic) double horizontalToolTopSpacing;
@property (nonatomic, readonly) double interToolSpacing;
@property (nonatomic, readonly) double interToolVerticalSpacing;
@property (nonatomic) double toolButtonPointerInteractionHighlightPadding;
@property (nonatomic) double toolParentViewEdgeSpacing;

- (double)dashSelectionIndicatorDistance;
- (double)dotSelectionIndicatorDistance;
- (double)horizontalToolBottomSpacing;
- (double)horizontalToolTopSpacing;
- (id)init;
- (double)interToolSpacing;
- (double)interToolVerticalSpacing;
- (void)setDashSelectionIndicatorDistance:(double)arg1;
- (void)setDotSelectionIndicatorDistance:(double)arg1;
- (void)setHorizontalToolBottomSpacing:(double)arg1;
- (void)setHorizontalToolTopSpacing:(double)arg1;
- (void)setToolButtonPointerInteractionHighlightPadding:(double)arg1;
- (void)setToolParentViewEdgeSpacing:(double)arg1;
- (double)toolButtonPointerInteractionHighlightPadding;
- (double)toolParentViewEdgeSpacing;

@end


@interface ICNotesEditorSettings : PTSettings {
    double  _attachmentViewSnapToContentHeightThreshold;
    double  _maxShadowOpacity;
    bool  _pageShadowEnabled;
    double  _rubberBandCatchUpAnimationDuration;
    double  _rubberBandDragDistance;
    double  _rubberBandRange;
    bool  _rubberBandingEnabled;
    double  _shadowLength;
    double  _snapToPDFDistanceForEndDragging;
    double  _snapToPDFWhileDraggingDistance;
    double  _snapToPDFWhileDraggingVelocityLimit;
    bool  _stickyHeaderWhenZoomed;
    bool  _zoomOutOnScroll;
}

@property (nonatomic) double attachmentViewSnapToContentHeightThreshold;
@property (nonatomic) double maxShadowOpacity;
@property (nonatomic) bool pageShadowEnabled;
@property (nonatomic) double rubberBandCatchUpAnimationDuration;
@property (nonatomic) double rubberBandDragDistance;
@property (nonatomic) double rubberBandRange;
@property (getter=isRubberBandingEnabled, nonatomic) bool rubberBandingEnabled;
@property (nonatomic) double shadowLength;
@property (nonatomic) double snapToPDFDistanceForEndDragging;
@property (nonatomic) double snapToPDFWhileDraggingDistance;
@property (nonatomic) double snapToPDFWhileDraggingVelocityLimit;
@property (nonatomic) bool stickyHeaderWhenZoomed;
@property (nonatomic) bool zoomOutOnScroll;

+ (id)settingsControllerModule;

- (double)attachmentViewSnapToContentHeightThreshold;
- (bool)isRubberBandingEnabled;
- (double)maxShadowOpacity;
- (bool)pageShadowEnabled;
- (double)rubberBandCatchUpAnimationDuration;
- (double)rubberBandDragDistance;
- (double)rubberBandRange;
- (void)setAttachmentViewSnapToContentHeightThreshold:(double)arg1;
- (void)setDefaultValues;
- (void)setMaxShadowOpacity:(double)arg1;
- (void)setPageShadowEnabled:(bool)arg1;
- (void)setRubberBandCatchUpAnimationDuration:(double)arg1;
- (void)setRubberBandDragDistance:(double)arg1;
- (void)setRubberBandRange:(double)arg1;
- (void)setRubberBandingEnabled:(bool)arg1;
- (void)setShadowLength:(double)arg1;
- (void)setSnapToPDFDistanceForEndDragging:(double)arg1;
- (void)setSnapToPDFWhileDraggingDistance:(double)arg1;
- (void)setSnapToPDFWhileDraggingVelocityLimit:(double)arg1;
- (void)setStickyHeaderWhenZoomed:(bool)arg1;
- (void)setZoomOutOnScroll:(bool)arg1;
- (double)shadowLength;
- (double)snapToPDFDistanceForEndDragging;
- (double)snapToPDFWhileDraggingDistance;
- (double)snapToPDFWhileDraggingVelocityLimit;
- (bool)stickyHeaderWhenZoomed;
- (bool)zoomOutOnScroll;

@end


@interface _UIDragLiftedItem : NSObject {
    double  _liftAlpha;
    _UIPlatterView * _platterView;
    UIView * _previewContainer;
    bool  _sourceViewWasAdded;
    UITargetedDragPreview * _targetedPreview;
}

@property (nonatomic) double liftAlpha;
@property (nonatomic, retain) _UIPlatterView *platterView;
@property (nonatomic, retain) UIView *previewContainer;
@property (nonatomic) bool sourceViewWasAdded;
@property (nonatomic, retain) UITargetedDragPreview *targetedPreview;

- (void).cxx_destruct;
- (double)liftAlpha;
- (id)platterView;
- (id)previewContainer;
- (void)setLiftAlpha:(double)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setPreviewContainer:(id)arg1;
- (void)setSourceViewWasAdded:(bool)arg1;
- (void)setTargetedPreview:(id)arg1;
- (bool)sourceViewWasAdded;
- (id)targetedPreview;

@end

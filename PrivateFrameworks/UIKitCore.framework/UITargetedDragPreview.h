
@interface UITargetedDragPreview : UITargetedPreview <_UIDragPreviewProvider> {
    bool  __applyTargetTransformToFlock;
    id /* block */  __fenceHandler;
    struct CGPoint { 
        double x; 
        double y; 
    }  __initialBadgeLocation;
    long long  __preferredStackOrder;
    UIView<_UIDragPreviewContainer> * __previewContainer;
    NSDictionary * __springboardParameters;
    bool  _didSetLiftAnchorPoint;
    _DUIPreview * _duiPreview;
    _UIDraggingImageComponent * _imageComponent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftAnchorPoint;
    bool  _preventAfterScreenUpdatesSnapshot;
}

@property (getter=_applyTargetTransformToFlock, setter=_setApplyTargetTransformToFlock:, nonatomic) bool _applyTargetTransformToFlock;
@property (nonatomic, readonly) <_UIDragPreviewProvider> *_dragPreviewProvider;
@property (nonatomic, readonly) _DUIPreview *_duiPreview;
@property (nonatomic, copy) id /* block */ _fenceHandler;
@property (setter=_setInitialBadgeLocation:, nonatomic) struct CGPoint { double x1; double x2; } _initialBadgeLocation;
@property (setter=_setPreferredStackOrder:, nonatomic) long long _preferredStackOrder;
@property (setter=_setPreviewContainer:, nonatomic, retain) UIView<_UIDragPreviewContainer> *_previewContainer;
@property (nonatomic, copy) NSDictionary *_springboardParameters;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_isDefaultPreview, setter=_setDefaultPreview:, nonatomic) bool defaultPreview;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } liftAnchorPoint;
@property (getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:, nonatomic) bool preventAfterScreenUpdatesSnapshot;
@property (readonly) Class superclass;
@property (getter=_viewToSnapshot, setter=_setViewToSnapshot:, nonatomic) UIView *viewToSnapshot;

+ (id)previewForURL:(id)arg1 target:(id)arg2;
+ (id)previewForURL:(id)arg1 title:(id)arg2 target:(id)arg3;

- (void).cxx_destruct;
- (bool)_applyTargetTransformToFlock;
- (id)_dragPreviewProvider;
- (id)_duiPreview;
- (id /* block */)_fenceHandler;
- (struct CGPoint { double x1; double x2; })_initialBadgeLocation;
- (long long)_preferredStackOrder;
- (bool)_preventAfterScreenUpdatesSnapshot;
- (id)_previewContainer;
- (void)_resetPreview;
- (void)_setApplyTargetTransformToFlock:(bool)arg1;
- (void)_setInitialBadgeLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setPreferredStackOrder:(long long)arg1;
- (void)_setPreventAfterScreenUpdatesSnapshot:(bool)arg1;
- (void)_setPreviewContainer:(id)arg1;
- (void)_setPreviewMode:(long long)arg1;
- (id)_springboardParameters;
- (id)imageComponent;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3;
- (struct CGPoint { double x1; double x2; })liftAnchorPoint;
- (id)retargetedPreviewWithTarget:(id)arg1;
- (void)setLiftAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_fenceHandler:(id /* block */)arg1;
- (void)set_springboardParameters:(id)arg1;
- (void)takeLiftAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;

@end

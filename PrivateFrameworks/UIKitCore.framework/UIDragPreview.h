
@interface UIDragPreview : NSObject <NSCopying> {
    NSDictionary * __springboardParameters;
    bool  _avoidAnimation;
    UIDragPreviewParameters * _parameters;
    NSValue * _preferredAnchorPoint;
    bool  _preventAfterScreenUpdatesSnapshot;
    UIView * _view;
}

@property (nonatomic, readonly) _DUIPreview *_duiPreview;
@property (nonatomic, copy) NSDictionary *_springboardParameters;
@property (nonatomic) bool _springboardPlatterStyle;
@property (nonatomic) bool avoidAnimation;
@property (nonatomic, readonly, copy) UIDragPreviewParameters *parameters;
@property (nonatomic) struct CGPoint { double x1; double x2; } preferredAnchorPoint;
@property (getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:, nonatomic) bool preventAfterScreenUpdatesSnapshot;
@property (nonatomic, readonly) UIView *view;

+ (struct CGSize { double x1; double x2; })defaultBoundingSize;
+ (id)previewForURL:(id)arg1;
+ (id)previewForURL:(id)arg1 title:(id)arg2;
+ (struct CGSize { double x1; double x2; })textBoundingSize;

- (void).cxx_destruct;
- (id)_duiPreview;
- (bool)_preventAfterScreenUpdatesSnapshot;
- (void)_setPreventAfterScreenUpdatesSnapshot:(bool)arg1;
- (id)_springboardParameters;
- (bool)_springboardPlatterStyle;
- (bool)avoidAnimation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;
- (id)parameters;
- (struct CGPoint { double x1; double x2; })preferredAnchorPoint;
- (void)setAvoidAnimation:(bool)arg1;
- (void)setPreferredAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_springboardParameters:(id)arg1;
- (void)set_springboardPlatterStyle:(bool)arg1;
- (id)view;

@end

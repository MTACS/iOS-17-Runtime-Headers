
@interface PUParallaxImageLayerView : PUParallaxLayerView {
    UIView * _backfillMaskView;
    bool  _backfillMaskingEnabled;
    PFParallaxImageLayer * _backfillParallaxImageLayer;
    UIView * _backfillView;
    UIView * _contentView;
    PUParallaxLayerLayoutInfo * _currentLayoutInfo;
    bool  _editing;
    PUHeadroomGradientView * _headroomGradientView;
    CALayer * _maskLayer;
    PFParallaxImageLayer * _parallaxImageLayer;
}

@property (nonatomic, retain) UIView *backfillMaskView;
@property (nonatomic) bool backfillMaskingEnabled;
@property (nonatomic, retain) PFParallaxImageLayer *backfillParallaxImageLayer;
@property (nonatomic, retain) UIView *backfillView;
@property (nonatomic, retain) UIView *contentView;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic, retain) PUHeadroomGradientView *headroomGradientView;
@property (nonatomic, readonly) CALayer *maskLayer;
@property (nonatomic, retain) PFParallaxImageLayer *parallaxImageLayer;

- (void).cxx_destruct;
- (void)_layoutWithCurrentLayoutInfo;
- (void)_updateParallaxBackfillLayerProperties;
- (void)_updateParallaxBackfillMaskingProperties;
- (void)_updateParallaxHeadroomLayerProperties;
- (void)_updateParallaxImageLayerProperties;
- (id)backfillMaskView;
- (bool)backfillMaskingEnabled;
- (id)backfillParallaxImageLayer;
- (id)backfillView;
- (id)contentView;
- (id)currentLayoutInfo;
- (id)headroomGradientView;
- (id)initWithParallaxImageLayer:(id)arg1 isEditing:(bool)arg2;
- (bool)isEditing;
- (void)layoutWithInfo:(id)arg1;
- (id)maskLayer;
- (id)parallaxImageLayer;
- (id)parallaxLayer;
- (void)setBackfillMaskView:(id)arg1;
- (void)setBackfillMaskingEnabled:(bool)arg1;
- (void)setBackfillParallaxImageLayer:(id)arg1;
- (void)setBackfillView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentLayoutInfo:(id)arg1;
- (void)setHeadroomGradientView:(id)arg1;
- (void)setParallaxImageLayer:(id)arg1;

@end

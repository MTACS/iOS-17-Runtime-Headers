
@interface _UIOverlayEffectViewEntry : _UIVisualEffectViewEntry {
    double  _alpha;
    UIColor * _color;
    NSString * _filterType;
    UIImage * _image;
}

@property (nonatomic) double alpha;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSString *filterType;
@property (nonatomic, retain) UIImage *image;

+ (id)newEntryWithFilterType:(id)arg1 color:(id)arg2 alpha:(double)arg3;
+ (id)newEntryWithFilterType:(id)arg1 image:(id)arg2 alpha:(double)arg3;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (double)alpha;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (id)color;
- (id)description;
- (id)filterType;
- (id)image;
- (void)removeEffectFromView:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setFilterType:(id)arg1;
- (void)setImage:(id)arg1;

@end

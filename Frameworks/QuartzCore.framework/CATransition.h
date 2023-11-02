
@interface CATransition : CAAnimation

@property float endProgress;
@property (copy) NSDictionary *options;
@property float startProgress;
@property (copy) NSString *subtype;
@property unsigned int transitionFlags;
@property (copy) NSString *type;

- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (float)endProgress;
- (id)filter;
- (id)options;
- (void)setEndProgress:(float)arg1;
- (void)setFilter:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setStartProgress:(float)arg1;
- (void)setSubtype:(id)arg1;
- (void)setTransitionFlags:(unsigned int)arg1;
- (void)setType:(id)arg1;
- (float)startProgress;
- (id)subtype;
- (unsigned int)transitionFlags;
- (id)type;

@end

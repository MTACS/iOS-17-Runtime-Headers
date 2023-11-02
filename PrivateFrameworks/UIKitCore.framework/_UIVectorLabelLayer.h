
@interface _UIVectorLabelLayer : CALayer <CAAnimationDelegate, CALayerDelegate> {
    NSArray * _currentLayers;
    _UIVectorTextLayout * _currentTextLayout;
    unsigned long long  _maxRenderedMoveDistance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxRenderedMoveDistance;
@property (readonly) Class superclass;
@property (nonatomic, copy) _UIVectorTextLayout *textLayout;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2;
- (void)_cleanupUnusedLayers;
- (id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2;
- (bool)_isPathCompatible:(struct CGPath { }*)arg1 with:(struct CGPath { }*)arg2;
- (id)_layersForTextLayout:(id)arg1;
- (void)_transitionWithSetup:(id /* block */)arg1 target:(id /* block */)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;
- (unsigned long long)maxRenderedMoveDistance;
- (void)setMaxRenderedMoveDistance:(unsigned long long)arg1;
- (void)willChangeValueForKey:(id)arg1;

@end

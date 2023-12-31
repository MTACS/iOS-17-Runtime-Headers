
@protocol _UIContextBindable <_UIContextDescribing>

@required

- (double)_bindableLevel;
- (CALayer *)_bindingLayer;
- (CAContext *)_boundContext;
- (_UIContextBinder *)_contextBinder;
- (bool)_isVisible;
- (void)_setBoundContext:(CAContext *)arg1;
- (void)_setContextBinder:(_UIContextBinder *)arg1;

@end

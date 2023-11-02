
@interface _UISelectionBandVisualProvider_iOS : NSObject <UIPointerInteractionDelegate, _UISelectionBandVisualProviding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPoint;
    UIPointerInteraction * _ptrInteraction;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPoint;
@property (nonatomic, retain) UIPointerInteraction *ptrInteraction;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (bool)_isActive;
- (void)beginAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)enabled;
- (void)endAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })initialPoint;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)ptrInteraction;
- (void)setEnabled:(bool)arg1;
- (void)setInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPtrInteraction:(id)arg1;
- (void)setView:(id)arg1;
- (void)updateWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)view;

@end


@interface _UIPointerInteractionPencilHoverDriver : NSObject <_UIPointerInteractionDriver> {
    struct { 
        bool invalid; 
    }  _flags;
    _UIPointerInteractionHoverGestureRecognizer * _hoverGestureRecognizer;
    <_UIPointerInteractionDriverSink> * _sink;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_handleHoverGesture:(id)arg1;
- (void)_installToView:(id)arg1;
- (void)_uninstallFromView:(id)arg1;
- (void)_updateHover:(id)arg1 forced:(bool)arg2;
- (bool)allowsUpdatesWhilePrimaryButtonIsPressed;
- (id)initWithSink:(id)arg1;
- (void)invalidate;
- (bool)isActive;
- (struct CAPoint3D { double x1; double x2; double x3; })locationInView:(id)arg1;
- (void)setView:(id)arg1;
- (long long)type;
- (id)view;

@end

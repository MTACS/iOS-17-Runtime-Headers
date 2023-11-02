
@interface PKFakeVoiceMemosDelegate : NSObject <PKScribbleInteractionDelegate> {
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_scribbleInteraction:(id)arg1 hitToleranceInsetsForElement:(id)arg2 defaultInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initWithView:(id)arg1;

@end

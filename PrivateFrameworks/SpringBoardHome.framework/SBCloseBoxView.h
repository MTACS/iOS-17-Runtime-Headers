
@interface SBCloseBoxView : SBHomeScreenButton <UIPointerInteractionDelegate> {
    UITapGestureRecognizer * _actionTapGestureRecognizer;
    <SBCloseBoxViewDelegate> * _delegate;
    <SBIconListLayout> * _listLayout;
}

@property (nonatomic, retain) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBCloseBoxViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestPadding;
@property (nonatomic, retain) <SBIconListLayout> *listLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionTapGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestPadding;
- (id)listLayout;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setActionTapGestureRecognizer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListLayout:(id)arg1;
- (bool)shouldTrack;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

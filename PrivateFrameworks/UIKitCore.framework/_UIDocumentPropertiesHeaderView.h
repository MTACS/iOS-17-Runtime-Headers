
@interface _UIDocumentPropertiesHeaderView : UIView <LPLinkViewDelegate, UIDragInteractionDelegate, UIGestureRecognizerDelegate, UIPointerInteractionDelegate> {
    struct { 
        unsigned int didSetupDragInteraction : 1; 
    }  _flags;
    LPLinkView * _linkView;
    UIContextMenuInteraction * _menuInteraction;
    UIDocumentProperties * _properties;
    UIButton * _shareButton;
    id /* block */  _sourceViewProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPLinkView *linkView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultDragPreview;
- (id)_defaultSharePreview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForDragInteraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForShareButton;
- (void)_share:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)initWithProperties:(id)arg1 metadata:(id)arg2 menuInteraction:(id)arg3 sourceViewProvider:(id /* block */)arg4;
- (id)linkView;
- (void)linkViewNeedsResize:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)update;

@end

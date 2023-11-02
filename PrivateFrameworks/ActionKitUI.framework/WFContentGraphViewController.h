
@interface WFContentGraphViewController : UIViewController {
    CKForceLayoutAnimator * _animator;
    bool  _coercing;
    WFContentItem * _contentItem;
    WFContentCoercionNodeView * _rootNodeView;
}

@property (nonatomic, retain) CKForceLayoutAnimator *animator;
@property (nonatomic) bool coercing;
@property (nonatomic, readonly) WFContentItem *contentItem;
@property (nonatomic, retain) WFContentCoercionNodeView *rootNodeView;

- (void).cxx_destruct;
- (id)animator;
- (bool)coercing;
- (id)contentItem;
- (void)done;
- (id)initWithContentItem:(id)arg1;
- (void)loadView;
- (void)panNode:(id)arg1;
- (id)rootNodeView;
- (void)setAnimator:(id)arg1;
- (void)setCoercing:(bool)arg1;
- (void)setRootNodeView:(id)arg1;
- (void)tapNode:(id)arg1;
- (bool)useSmallBubbles;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

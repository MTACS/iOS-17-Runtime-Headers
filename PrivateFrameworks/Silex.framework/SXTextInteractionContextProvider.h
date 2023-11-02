
@interface SXTextInteractionContextProvider : NSObject <SXInteractionContextProviding> {
    <SXActionManager> * _actionManager;
    SXTangierController * _tangierController;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXTangierController *tangierController;

- (void).cxx_destruct;
- (id)actionManager;
- (void)commitPreviewViewController:(id)arg1;
- (id)contextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;
- (id)initWithTangierController:(id)arg1 actionManager:(id)arg2;
- (void)repAndHyperlinkAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2 block:(id /* block */)arg3;
- (id)tangierController;
- (id)targetedPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;
- (id)toolTipAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportRectForLinkInRep:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 viewport:(id)arg3;

@end


@interface PaperKit.SynapseLinkView : PaperKit.LinkView <LPLinkViewDelegate> {
    void $__lazy_storage_$_analytics;
    void $__lazy_storage_$_hasUserActivityWithLinkContextInfo;
    void $__lazy_storage_$_linkPresentationView;
    void canvas;
    void synapseLink;
    void viewModelSize;
    void viewScaleTransform;
}

- (void).cxx_destruct;
- (id)_contextMenuActionsForLinkView:(id)arg1;
- (bool)_wantsContextMenuPreviewForLinkView:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)linkViewNeedsResize:(id)arg1;

@end

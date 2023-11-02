
@interface PaperKit.LinkCanvasElementView : _TtGC8PaperKit17CanvasElementViewVS_4Link_ {
    void $__lazy_storage_$_linkView;
    void editingEnabled;
    void tapToOpenLinkGR;
}

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)didLongPressToSelect:(id)arg1;
- (void)didTapToOpenLink:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;

@end


@interface NewsUI2.MiniMastheadViewProvider : NSObject <NUFeedTitleViewDelegate, NUTitleViewStyler> {
    void $__lazy_storage_$_regularContainerTitleView;
    void compactMiniMastheadView;
    void delegate;
    void layoutAttributesFactory;
    void model;
    void refreshStateMachine;
    void regularMiniMastheadView;
    void renderer;
}

- (void).cxx_destruct;
- (void)feedTitleViewDidTapOnTitleView:(id)arg1;
- (id)init;
- (id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(struct CGSize { double x1; double x2; })arg3;

@end

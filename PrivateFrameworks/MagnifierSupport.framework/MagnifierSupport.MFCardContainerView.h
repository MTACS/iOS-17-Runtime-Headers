
@interface MagnifierSupport.MFCardContainerView : MagnifierSupport.MFPassthroughView <UITextDragDelegate> {
    void backdropView;
    void backgroundBlur;
    void card;
    void configuration;
    void contentView;
    void draggableView;
    void grabberView;
    void internalDraggableView;
    void shadowView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateAppearanceForReduceTransparency:(id)arg1;

@end

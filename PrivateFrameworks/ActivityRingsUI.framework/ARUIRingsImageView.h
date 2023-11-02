
@interface ARUIRingsImageView : UIImageView <ARUIRingGroupDelegate> {
    bool  _needsImageRender;
    ARUIRenderContext * _renderContext;
    ARUIRenderer * _renderer;
    ARUIRingGroup * _ringGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARUIRenderer *renderer;
@property (nonatomic, readonly) ARUIRingGroup *ringGroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_renderImage;
- (void)_updateRenderContext;
- (id)initWithRingGroup:(id)arg1;
- (id)initWithRingGroup:(id)arg1 renderer:(id)arg2;
- (void)layoutSubviews;
- (id)renderer;
- (id)ringGroup;
- (void)ringGroupHasUpdated:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

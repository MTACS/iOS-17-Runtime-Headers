
@interface PXWidgetCompositionTilingControllerElement : PXWidgetCompositionElement {
    bool  __didLoadContent;
}

@property (setter=_setDidLoadContent:, nonatomic) bool _didLoadContent;

- (bool)_didLoadContent;
- (void)_setDidLoadContent:(bool)arg1;
- (id)animationOptionsOriginatingTilingController;
- (id)contentTilingController;

@end

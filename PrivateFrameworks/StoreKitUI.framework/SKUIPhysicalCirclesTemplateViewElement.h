
@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement {
    SKUIPhysicalCirclesTemplateDOMFeature * _scriptInterface;
}

@property (nonatomic, readonly) NSArray *circleItemElements;
@property (nonatomic, readonly) SKUIPaletteViewElement *footerPaletteElement;
@property (nonatomic, readonly) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface;
@property (nonatomic, readonly) SKUILabelViewElement *subtitleElement;
@property (nonatomic, readonly) SKUILabelViewElement *titleElement;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)circleItemElements;
- (void)dispatchRemovedEventWithChildViewElement:(id)arg1;
- (id)footerPaletteElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)scriptInterface;
- (id)subtitleElement;
- (id)titleElement;

@end

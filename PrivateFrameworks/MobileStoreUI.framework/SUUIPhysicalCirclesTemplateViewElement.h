
@interface SUUIPhysicalCirclesTemplateViewElement : SUUIViewElement {
    SUUIPhysicalCirclesTemplateDOMFeature * _scriptInterface;
}

@property (nonatomic, readonly) NSArray *circleItemElements;
@property (nonatomic, readonly) SUUIPaletteViewElement *footerPaletteElement;
@property (nonatomic, readonly) SUUIPhysicalCirclesTemplateDOMFeature *scriptInterface;
@property (nonatomic, readonly) SUUILabelViewElement *subtitleElement;
@property (nonatomic, readonly) SUUILabelViewElement *titleElement;

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

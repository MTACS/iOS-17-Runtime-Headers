
@interface VSIKItemGroupElement : IKViewElement {
    VSIKItemGroup * _itemGroup;
}

@property (nonatomic, readonly) VSIKItemGroup *itemGroup;

+ (id)supportedFeaturesForElementName:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)itemGroup;

@end


@interface SKUIDynamicShelfViewElement : SKUIShelfViewElement <SKUIDynamicShelfViewElement> {
    SKUIViewElement * _cellTemplateViewElement;
}

@property (nonatomic, readonly) SKUIViewElement *cellTemplateViewElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SKUIEntityProviding> *entityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)cellTemplateViewElement;
- (bool)isDynamicContainer;
- (void)setShelfItemViewElementValidator:(id /* block */)arg1;

@end

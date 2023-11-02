
@interface SUUIDynamicShelfViewElement : SUUIShelfViewElement <SUUIDynamicShelfViewElement> {
    SUUIViewElement * _cellTemplateViewElement;
}

@property (nonatomic, readonly) SUUIViewElement *cellTemplateViewElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SUUIEntityProviding> *entityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)cellTemplateViewElement;
- (bool)isDynamicContainer;
- (void)setShelfItemViewElementValidator:(id /* block */)arg1;

@end

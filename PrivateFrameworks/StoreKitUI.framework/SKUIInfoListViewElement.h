
@interface SKUIInfoListViewElement : SKUIViewElement {
    long long  _infoListType;
}

@property (nonatomic, readonly) long long infoListType;

- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (long long)infoListType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end
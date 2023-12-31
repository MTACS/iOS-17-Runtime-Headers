
@interface SKUIColumnViewElement : SKUIViewElement {
    long long  _columnSpan;
}

@property (nonatomic, readonly) long long columnSpan;
@property (nonatomic, readonly) SKUIHeaderViewElement *headerElement;

- (id)applyUpdatesWithElement:(id)arg1;
- (long long)columnSpan;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)headerElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end

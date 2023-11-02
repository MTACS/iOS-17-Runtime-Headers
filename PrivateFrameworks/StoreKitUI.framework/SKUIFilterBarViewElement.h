
@interface SKUIFilterBarViewElement : SKUIViewElement

@property (nonatomic, readonly) SKUIDividerViewElement *bottomDivider;

- (id)bottomDivider;
- (id)childViewElementsForAlignment:(unsigned long long)arg1;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (long long)pageComponentType;

@end


@interface SUUIHeaderViewElement : SUUIViewElement

@property (nonatomic, readonly) SUUIButtonViewElement *button;
@property (nonatomic, readonly) NSArray *titleLabels;

- (id)button;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;
- (id)titleLabels;

@end

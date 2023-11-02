
@interface SKUIProgressIndicatorViewElement : SKUIViewElement {
    float  _value;
}

@property (nonatomic, readonly) float value;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (float)value;

@end

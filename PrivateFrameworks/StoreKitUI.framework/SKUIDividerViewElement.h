
@interface SKUIDividerViewElement : SKUIViewElement {
    SKUIButtonViewElement * _button;
    long long  _dividerType;
    bool  _dividerTypeWasInitialized;
    SKUIViewElementText * _text;
}

@property (nonatomic, readonly) SKUIButtonViewElement *button;
@property (nonatomic, readonly) long long dividerType;
@property (nonatomic, readonly) SKUIViewElementText *text;

- (void).cxx_destruct;
- (id)button;
- (long long)dividerType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)pageComponentType;
- (id)text;

@end

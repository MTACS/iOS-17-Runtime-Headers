
@interface SUUIDividerViewElement : SUUIViewElement {
    SUUIButtonViewElement * _button;
    long long  _dividerType;
    bool  _dividerTypeWasInitialized;
    SUUIViewElementText * _text;
}

@property (nonatomic, readonly) SUUIButtonViewElement *button;
@property (nonatomic, readonly) long long dividerType;
@property (nonatomic, readonly) SUUIViewElementText *text;

- (void).cxx_destruct;
- (id)button;
- (long long)dividerType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)pageComponentType;
- (id)text;

@end


@interface SUUIOrdinalViewElement : SUUIViewElement {
    SUUIViewElementText * _text;
}

@property (nonatomic, readonly) SUUIViewElementText *text;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)text;

@end

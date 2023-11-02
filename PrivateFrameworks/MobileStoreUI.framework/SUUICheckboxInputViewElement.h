
@interface SUUICheckboxInputViewElement : SUUIInputViewElement {
    BOOL  _disabled;
    bool  _selected;
}

@property (getter=isSelected, nonatomic) bool selected;

- (id)applyUpdatesWithElement:(id)arg1;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isSelected;
- (void)setSelected:(bool)arg1;

@end
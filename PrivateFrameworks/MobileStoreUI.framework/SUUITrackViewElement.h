
@interface SUUITrackViewElement : SUUIViewElement {
    BOOL  _enabled;
    bool  _selected;
}

@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) SUUIActionsViewElement *swipeActions;

- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (bool)isSelected;
- (id)swipeActions;

@end


@interface SUUIExpandViewElement : SUUIViewElement {
    bool  _open;
    bool  _previousIsOpen;
}

@property (getter=isOpen, nonatomic, readonly) bool open;
@property (nonatomic) bool previousIsOpen;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isOpen;
- (long long)pageComponentType;
- (bool)previousIsOpen;
- (void)setPreviousIsOpen:(bool)arg1;

@end

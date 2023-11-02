
@interface SUUIToolbarButtonsController : NSObject {
    NSMapTable * _buttonItemElements;
    SUUIToolbarViewElement * _toolbarElement;
}

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (id)addButtonItemWithButtonViewElement:(id)arg1;
- (void)disconnectAllButtons;
- (id)initWithToolbarViewElement:(id)arg1;

@end

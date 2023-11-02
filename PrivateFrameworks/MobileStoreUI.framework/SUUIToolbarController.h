
@interface SUUIToolbarController : NSObject {
    SUUIToolbarButtonsController * _buttonsController;
    <SUUIToolbarControllerDelegate> * _delegate;
    NSArray * _toolbarItems;
    SUUIToolbarViewElement * _viewElement;
}

@property (nonatomic) <SUUIToolbarControllerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *toolbarItems;
@property (nonatomic, readonly) SUUIToolbarViewElement *toolbarViewElement;

- (void).cxx_destruct;
- (id)_barButtonItemWithButtonElement:(id)arg1;
- (id)_barButtonItemWithElement:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)detachFromNavigationController:(id)arg1;
- (id)initWithToolbarViewElement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)toolbarButtonsController:(id)arg1 shouldDispatchEventForButton:(id)arg2;
- (id)toolbarItems;
- (id)toolbarViewElement;
- (void)updateToolbarForNavigationController:(id)arg1;

@end

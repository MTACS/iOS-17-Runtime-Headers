
@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral> {
    <UIWebFormControl> * _selectControl;
    DOMHTMLSelectElement * _selectionNode;
}

@property (nonatomic, retain) <UIWebFormControl> *_selectControl;
@property (nonatomic, retain) DOMHTMLSelectElement *_selectionNode;

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;

- (id)_selectControl;
- (id)_selectionNode;
- (id)assistantView;
- (void)beginEditing;
- (void)dealloc;
- (void)endEditing;
- (id)initWithDOMHTMLSelectElement:(id)arg1;
- (void)set_selectControl:(id)arg1;
- (void)set_selectionNode:(id)arg1;

@end

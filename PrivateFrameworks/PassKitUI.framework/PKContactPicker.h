
@interface PKContactPicker : NSObject <CNContactPickerDelegate> {
    id /* block */  _cancelationHandler;
    UIViewController * _pickerViewController;
    id /* block */  _selectionHandler;
}

@property (nonatomic, copy) id /* block */ cancelationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *pickerViewController;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)cancelationHandler;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)initWithSelectionHandler:(id /* block */)arg1 cancelationHandler:(id /* block */)arg2;
- (id)pickerViewController;
- (id /* block */)selectionHandler;
- (void)setCancelationHandler:(id /* block */)arg1;
- (void)setPickerViewController:(id)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;

@end

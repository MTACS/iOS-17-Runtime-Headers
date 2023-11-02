
@interface _TtCV14WorkflowEditor17ContactPickerView11Coordinator : NSObject <CNContactPickerDelegate, WFRecipientFieldViewControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  parent;
}

- (void).cxx_destruct;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)init;
- (void)recipientViewControllerDidFinish:(id)arg1 cancelled:(bool)arg2;

@end

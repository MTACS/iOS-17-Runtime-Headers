
@interface _TtCV10WorkflowUI17DictationTextView11Coordinator : NSObject <UITextViewDelegate> {
    void configuration;
    void isDictating;
    void isEditing;
    void textView;
}

- (void).cxx_destruct;
- (id)init;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end


@interface NewsSubscription.HideMyEmailSignupBlueprintViewHeaderFooterProvider : NSObject <UITextViewDelegate> {
    void delegate;
    void footerRenderer;
    void headerRenderer;
}

- (void).cxx_destruct;
- (id)init;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end

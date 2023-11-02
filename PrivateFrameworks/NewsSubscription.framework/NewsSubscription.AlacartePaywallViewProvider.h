
@interface NewsSubscription.AlacartePaywallViewProvider : NSObject <UITextViewDelegate> {
    void dataProvider;
    void delegate;
    void layoutAttributesFactory;
    void paywallModel;
    void paywallView;
    void renderer;
    void styler;
    void subscribeButtonTextProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end

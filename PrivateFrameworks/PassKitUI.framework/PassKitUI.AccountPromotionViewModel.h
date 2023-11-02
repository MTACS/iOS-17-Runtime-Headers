
@interface PassKitUI.AccountPromotionViewModel : NSObject <PKLinkedApplicationObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _appStoreButtonTitle;
    void layout;
    void linkedApplication;
    void promotion;
    void template;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)linkedApplicationDidChangeState:(id)arg1;

@end


@interface TipKitLegacy.TipKitViewModel : NSObject <TipKitLegacy.TPKContentControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasContent;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tipContent;
    void clientContextMapHandler;
    void customizationHandler;
    void eventOccurredHandler;
    void personalizationHandler;
    void tipContentController;
    void tipViewBackgroundColor;
    void tipViewContentBackgroundColor;
    void tipViewIcon;
}

- (void).cxx_destruct;
- (id)contentController:(id)arg1 clientContextMapForKeys:(id)arg2;
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(bool)arg3;
- (id)contentController:(id)arg1 contentView:(id)arg2 iconForCustomizationID:(long long)arg3;
- (void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(bool)arg3;
- (void)contentController:(id)arg1 eventOccurred:(long long)arg2 content:(id)arg3 context:(id)arg4;
- (id)contentController:(id)arg1 personalizedStringForID:(long long)arg2 content:(id)arg3;
- (id)init;

@end

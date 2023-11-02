
@interface FamilyCircleUI.ChecklistTipDataLoader : NSObject <TipKitLegacy.TPKContentControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showTipCell;
    void checklistTipCell;
    void checklistTipContext;
    void tPKContentController;
}

- (void).cxx_destruct;
- (void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(bool)arg3;
- (void)dismissButtonWasTapped;
- (id)init;

@end

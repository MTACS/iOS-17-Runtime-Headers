
@interface PXGridTipsHelper_Swift : PXTipsHelper_Swift {
    void hasStartedTips;
    void switchLibraryTip;
    void syndicatedAssetsTip;
}

+ (id)curatedLibrarySwitchTipID;
+ (void)setTip:(id)arg1 isPresentable:(bool)arg2;
+ (void)setTipActionPerformed:(id)arg1;
+ (void)setTipsPresentationDelegate:(id)arg1;
+ (id)shared;
+ (id)syndicatedAssetsTipID;

- (void).cxx_destruct;
- (id)init;

@end


@interface PXTipsHelper_Swift : NSObject <UIPopoverPresentationControllerDelegate> {
    void presentedTipID;
    void tipPopover;
}

@property (nonatomic, copy) NSString *presentedTipID;
@property (nonatomic) UIViewController *tipPopover;

+ (bool)hasInitializedTips;
+ (bool)isInitializingTips;
+ (bool)isTipInvalidated:(id)arg1;
+ (id)presentationDelegates;
+ (void)setHasInitializedTips:(bool)arg1;
+ (void)setIsInitializingTips:(bool)arg1;
+ (void)setPresentationDelegates:(id)arg1;
+ (void)setTip:(id)arg1 presentationDelegate:(id)arg2;
+ (void)setup;

- (void).cxx_destruct;
- (id)init;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentedTipID;
- (void)setPresentedTipID:(id)arg1;
- (void)setTipPopover:(id)arg1;
- (id)tipPopover;
- (void)updatePopoverTip:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end

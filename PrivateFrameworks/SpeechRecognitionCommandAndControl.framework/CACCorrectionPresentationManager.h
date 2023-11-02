
@interface CACCorrectionPresentationManager : CACSimpleContentViewManager <CACCorrectionsPresentationDelegate, UIPopoverPresentationControllerDelegate> {
    AXElement * _element;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXElement *element;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)axNotification;
+ (long long)remoteViewType;

- (void).cxx_destruct;
- (void)_showCorrectionsForElement:(id)arg1 fromString:(id)arg2 withAlternatives:(id)arg3 withEmojis:(id)arg4 portraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)correctionsPresentationViewController:(id)arg1 didSelectItemWithText:(id)arg2;
- (id)currentlyDisplayedCorrections;
- (void)dismissCorrectionsPresentationViewController:(id)arg1;
- (id)element;
- (void)handleAXNotificationData:(void*)arg1;
- (void)hideIfNeededForElements:(id)arg1;
- (bool)isOverlay;
- (void)setElement:(id)arg1;
- (void)showCorrectionsForElement:(id)arg1 nBestStrings:(id)arg2;

@end

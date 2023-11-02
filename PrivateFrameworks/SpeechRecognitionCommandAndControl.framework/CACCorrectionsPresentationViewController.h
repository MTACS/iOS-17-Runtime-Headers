
@interface CACCorrectionsPresentationViewController : UIViewController <CACCCorrectionsCandidatesViewControllerDelegate, CACViewController, UIPopoverPresentationControllerDelegate> {
    CACCorrectionsCandidatesViewController * _correctionViewController;
    <CACCorrectionsPresentationDelegate> * _delegate;
    CACPopoverPresentingViewController * _popoverPresentingViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _portraitUpSourceRect;
    NSString * _text;
}

@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic, retain) CACCorrectionsCandidatesViewController *correctionViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CACCorrectionsPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *emojis;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, retain) CACPopoverPresentingViewController *popoverPresentingViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } portraitUpSourceRect;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) long long zOrder;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)alternatives;
- (id)correctionViewController;
- (void)correctionsCandidatesViewController:(id)arg1 didSelectItemWithText:(id)arg2;
- (id)delegate;
- (void)dismissCorrectionsCandidatesViewController:(id)arg1;
- (id)emojis;
- (id)init;
- (bool)isOverlay;
- (id)popoverPresentingViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })portraitUpSourceRect;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setCorrectionViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmojis:(id)arg1;
- (void)setPopoverPresentingViewController:(id)arg1;
- (void)setPortraitUpSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)viewDidAppear:(bool)arg1;
- (long long)zOrder;

@end

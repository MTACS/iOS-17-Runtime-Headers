
@interface _UIStickerPickerViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate, _UIStickerPickerRemoteViewControllerDelegate> {
    _UIStickerPickerServiceRemoteViewController * _card;
    <_UIStickerPickerViewControllerDelegate> * _delegate;
    bool  _isLaunchedFromKeyboard;
    bool  _keyWindowChangedDuringInsert;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
}

@property (nonatomic, retain) _UIStickerPickerServiceRemoteViewController *card;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIStickerPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLaunchedFromKeyboard;
@property (nonatomic) bool keyWindowChangedDuringInsert;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsReturningStickerIdentifiersDuringAddition;

+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_addStickerWithRepresentations:(id)arg1 previewView:(id)arg2 animatingTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_insertStickerFromItemProvider:(id)arg1;
- (void)_remoteViewDidLoad:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectInWindowCoordinates;
- (void)_updatePopoverWindowLocation;
- (id)_viewServiceProxy;
- (void)addStickerWithRepresentations:(id)arg1 previewView:(id)arg2 originatingView:(id)arg3;
- (void)addStickerWithRepresentations:(id)arg1 previewView:(id)arg2 originatingView:(id)arg3 completion:(id /* block */)arg4;
- (void)animatedStickerCreationProgressChanged:(id)arg1 progress:(double)arg2;
- (id)card;
- (id)delegate;
- (void)dismissCard;
- (void)dismissCardAnimated:(bool)arg1;
- (id /* block */)dismissCompletionHandler;
- (id)init;
- (bool)isLaunchedFromKeyboard;
- (bool)keyWindowChangedDuringInsert;
- (void)loadView;
- (void)presentCard;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)arg1;
- (void)setCard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setIsLaunchedFromKeyboard:(bool)arg1;
- (void)setKeyWindowChangedDuringInsert:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)stageSticker:(id)arg1;
- (void)stageStickerWithIdentifier:(id)arg1 representations:(id)arg2 name:(id)arg3 externalURI:(id)arg4 accessibilityLabel:(id)arg5;
- (void)stickerPickerCardDidLoad;
- (bool)supportsReturningStickerIdentifiersDuringAddition;
- (bool)supportsReturningStickerIdentifiersDuringAdditionV2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end


@interface TSDCanvasView : UIView <UITextInputTraits, UITextLinkInteraction, _UITextInputRevealSupportProviding> {
    TSDInteractiveCanvasController * mController;
    <UITextLinkInteraction> * mHyperLinkDelegate;
    <TSDCanvasLayerHosting> * mLayerHost;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) TSDCanvasLayer *canvasLayer;
@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (readonly) TSKScrollView *enclosingScrollView;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UITextLinkInteraction> *hyperLinkDelegate;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) <TSDCanvasLayerHosting> *layerHost;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, readonly) TSDCanvasView *rootCanvasView;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (Class)layerClass;

- (void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (id)_textImageFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_textInputForReveal;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)cancelInteractionWithLink;
- (id)canvasLayer;
- (id)controller;
- (id)enclosingScrollView;
- (id)hyperLinkDelegate;
- (bool)isInteractingWithLink;
- (id)layerHost;
- (bool)mightHaveLinks;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rootCanvasView;
- (void)setController:(id)arg1;
- (void)setHyperLinkDelegate:(id)arg1;
- (void)setLayerHost:(id)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)teardown;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (bool)_isInPreviewPlatter;
- (id)_speakThisElements;
- (bool)accessibilityElementsHidden;
- (id)sxaxNextSpeakThisElementFromElement:(id)arg1;

@end

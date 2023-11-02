
@interface ChatKit.ClarityUIChatController : CKChatController {
    void clarityUIDelegate;
    void lastLaidOutSize;
    void navigationBarTopInset;
    void sendCompositionPublisher;
    void sendCompositionPublisherSubscriber;
    void synthesizer;
}

@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, readonly) bool shouldDisplayTextEntry;
@property (nonatomic) bool shouldShowDoneButton;

+ (Class)transcriptControllerClass;

- (void).cxx_destruct;
- (bool)_clickyOrbEnabled;
- (id)composition;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsWithoutPalette;
- (void)sendCompositionWithNotification:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setShouldShowDoneButton:(bool)arg1;
- (bool)shouldDisplayTextEntry;
- (bool)shouldShowDoneButton;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 didScroll:(struct CGPoint { double x1; double x2; })arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

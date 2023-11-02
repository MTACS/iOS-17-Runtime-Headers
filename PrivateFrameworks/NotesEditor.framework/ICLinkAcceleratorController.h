
@interface ICLinkAcceleratorController : NSObject {
    void acceleratorChar;
    void currentSuggestionRange;
    void delegate;
    void isShowing;
    void linkDelegate;
    void maxCharactersTyped;
    void mode;
    void needToWaitUntilUpdateBoundsToAppear;
    void numTimesAcceleratorCharMustBeTyped;
    void viewController;
}

@property (nonatomic) <ICLinkAcceleratorControllerDelegate> *delegate;
@property (nonatomic) bool isShowing;
@property (nonatomic) <ICLinkEditorDelegate> *linkDelegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)didSelectAutocompleteItem:(id)arg1;
- (bool)handleArrowDown;
- (bool)handleArrowUp;
- (bool)handleUseCurrentSuggestion;
- (void)hideAccelerator;
- (id)init;
- (id)initWithCloudConfiguration:(id)arg1 mode:(long long)arg2;
- (bool)isShowing;
- (id)linkDelegate;
- (void)presentLinkAcceleratorIfNecessaryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setDelegate:(id)arg1;
- (void)setIsShowing:(bool)arg1;
- (void)setLinkDelegate:(id)arg1;
- (void)updateAcceleratorOriginWith:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end


@interface PUPickerSuggestionsView : UIView {
    void contentHeightObservation;
    void contentWidthConstraint;
    void context;
    void delegate;
    void needsRTLInitialOffsetCorrection;
    void photoLibrary;
    void preferredViewHeight;
    void reloadQueue;
    void scrollView;
    void selectedSuggestion;
    void stackView;
    void suggestionGroup;
}

@property (nonatomic) <PUPickerSuggestionsViewDelegate> *delegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic) double preferredViewHeight;
@property (nonatomic, retain) _PHPickerSuggestionGroup *suggestionGroup;

+ (double)verticalMargin;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithIsProcessing:(bool)arg1 isDeviceAspectRatioContentMode:(bool)arg2 contentHasSpecialFilter:(bool)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)photoLibrary;
- (double)preferredViewHeight;
- (void)setDelegate:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPreferredViewHeight:(double)arg1;
- (void)setSuggestionGroup:(id)arg1;
- (id)suggestionGroup;

@end

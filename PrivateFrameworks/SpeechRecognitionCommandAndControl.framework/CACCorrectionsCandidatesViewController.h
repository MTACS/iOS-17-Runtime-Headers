
@interface CACCorrectionsCandidatesViewController : UIViewController <TUICandidateViewDelegate> {
    NSArray * _allCandidates;
    NSArray * _alternatives;
    UIView * _candidateBackdropView;
    CACCorrectionsCandidateState * _candidateConfiguration;
    TUICandidateView * _candidateView;
    <CACCCorrectionsCandidatesViewControllerDelegate> * _delegate;
    NSArray * _emojis;
    TIKeyboardCandidateSingle * _originalTextCandidate;
    TUICandidateView * _secondaryCandidateView;
    NSString * _text;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *allCandidates;
@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic, retain) UIView *candidateBackdropView;
@property (nonatomic, retain) CACCorrectionsCandidateState *candidateConfiguration;
@property (nonatomic, retain) TUICandidateView *candidateView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CACCCorrectionsCandidatesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *emojis;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TIKeyboardCandidateSingle *originalTextCandidate;
@property (nonatomic, retain) TUICandidateView *secondaryCandidateView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)allCandidates;
- (id)alternatives;
- (id)candidateBackdropView;
- (id)candidateConfiguration;
- (id)candidateResultSet;
- (id)candidateView;
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4;
- (void)candidateViewDidTapArrowButton:(id)arg1;
- (void)candidateViewNeedsToExpand:(id)arg1;
- (void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2;
- (void)candidateViewWillBeginDragging:(id)arg1;
- (void)closeButtonTapped;
- (void)dealloc;
- (id)delegate;
- (id)emojis;
- (id)newCandidateKeyWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)originalTextCandidate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)secondaryCandidateView;
- (void)setAllCandidates:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setCandidateBackdropView:(id)arg1;
- (void)setCandidateConfiguration:(id)arg1;
- (void)setCandidateView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmojis:(id)arg1;
- (void)setOriginalTextCandidate:(id)arg1;
- (void)setSecondaryCandidateView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupConfigurations;
- (id)text;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCandidateSet;
- (void)updateConfigurations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end


@interface CKTranscriptCell : CKEditableCollectionViewCell {
    double  _associatedItemOffset;
    double  _drawerPercentRevealed;
    bool  _insertingBeforeReplyPreview;
    bool  _insertingWithReplyPreview;
    double  _insertionBeginTime;
    double  _insertionDuration;
    long long  _insertionType;
    bool  _isInReplyContext;
    NSArray * _linkInteractions;
    BOOL  _orientation;
    bool  _shouldConfigureForDarkFSM;
    bool  _suppressAnimationsForLineUpdates;
    bool  _wantsDrawerLayout;
}

@property (nonatomic) double associatedItemOffset;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) bool insertingBeforeReplyPreview;
@property (nonatomic) bool insertingWithReplyPreview;
@property (nonatomic) double insertionBeginTime;
@property (nonatomic) double insertionDuration;
@property (nonatomic) long long insertionType;
@property (nonatomic) bool isInReplyContext;
@property (nonatomic, retain) NSArray *linkInteractions;
@property (nonatomic) BOOL orientation;
@property (nonatomic) bool shouldConfigureForDarkFSM;
@property (getter=suppressesAnimationsForLineUpdates, nonatomic) bool suppressAnimationsForLineUpdates;
@property (nonatomic) bool wantsDrawerLayout;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (double)associatedItemOffset;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (double)drawerPercentRevealed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)insertingBeforeReplyPreview;
- (bool)insertingWithReplyPreview;
- (double)insertionBeginTime;
- (double)insertionDuration;
- (long long)insertionType;
- (bool)isInReplyContext;
- (void)layoutSubviews;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (id)linkInteractions;
- (BOOL)orientation;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setAssociatedItemOffset:(double)arg1;
- (void)setDrawerPercentRevealed:(double)arg1;
- (void)setInsertingBeforeReplyPreview:(bool)arg1;
- (void)setInsertingWithReplyPreview:(bool)arg1;
- (void)setInsertionBeginTime:(double)arg1;
- (void)setInsertionDuration:(double)arg1;
- (void)setInsertionType:(long long)arg1;
- (void)setIsInReplyContext:(bool)arg1;
- (void)setLinkInteractions:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setShouldConfigureForDarkFSM:(bool)arg1;
- (void)setSuppressAnimationsForLineUpdates:(bool)arg1;
- (void)setWantsDrawerLayout:(bool)arg1;
- (bool)shouldConfigureForDarkFSM;
- (bool)suppressesAnimationsForLineUpdates;
- (bool)wantsDrawerLayout;

@end

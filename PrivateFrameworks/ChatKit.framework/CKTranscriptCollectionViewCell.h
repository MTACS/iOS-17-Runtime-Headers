
@interface CKTranscriptCollectionViewCell : UICollectionViewCell <CKTranscriptCellProtocol, CKTranscriptCollectionViewCellProtocol> {
    double  _associatedItemOffset;
    UILabel * _debugLabel;
    double  _drawerPercentRevealed;
    bool  _isInReplyContext;
    BOOL  _orientation;
    bool  _wantsDrawerLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  contentAlignmentRect;
    bool  isAnimatingInDarkEffect;
}

@property (nonatomic) double associatedItemOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentAlignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UILabel *debugLabel;
@property (readonly, copy) NSString *description;
@property (nonatomic) double drawerPercentRevealed;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimatingInDarkEffect;
@property (nonatomic) bool isInReplyContext;
@property (nonatomic) BOOL orientation;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDrawerLayout;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (double)associatedItemOffset;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignmentRect;
- (id)debugLabel;
- (id)description;
- (double)drawerPercentRevealed;
- (bool)isAnimatingInDarkEffect;
- (bool)isInReplyContext;
- (void)layoutSubviews;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (BOOL)orientation;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)performReveal:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setAssociatedItemOffset:(double)arg1;
- (void)setContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDebugLabel:(id)arg1;
- (void)setDrawerPercentRevealed:(double)arg1;
- (void)setIsAnimatingInDarkEffect:(bool)arg1;
- (void)setIsInReplyContext:(bool)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setWantsDrawerLayout:(bool)arg1;
- (bool)wantsDrawerLayout;

@end

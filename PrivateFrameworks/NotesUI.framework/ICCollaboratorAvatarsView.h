
@interface ICCollaboratorAvatarsView : UIView {
    NSArray * _avatarContainerViews;
    UIStackView * _avatarStackView;
    double  _borderWidth;
    double  _dimension;
    NSArray * _participants;
    bool  _reverseZIndexing;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowOpacity;
    double  _shadowRadius;
    CKShare * _share;
    double  _spacing;
}

@property (nonatomic, retain) NSArray *avatarContainerViews;
@property (nonatomic, retain) UIStackView *avatarStackView;
@property (nonatomic) double borderWidth;
@property (nonatomic) double dimension;
@property (nonatomic, readonly) unsigned long long displayedAvatarCount;
@property (nonatomic, retain) NSArray *participants;
@property (nonatomic) bool reverseZIndexing;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) CKShare *share;
@property (nonatomic) double spacing;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)avatarContainerViews;
- (id)avatarStackView;
- (id)avatarViews;
- (double)borderWidth;
- (void)commonInit;
- (id)createAvatarContainerView;
- (id)defaultAvatarImageViewWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)dimension;
- (unsigned long long)displayedAvatarCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)participants;
- (bool)reverseZIndexing;
- (void)setAvatarContainerViews:(id)arg1;
- (void)setAvatarStackView:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setDimension:(double)arg1;
- (void)setParticipants:(id)arg1;
- (void)setReverseZIndexing:(bool)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShare:(id)arg1;
- (void)setSpacing:(double)arg1;
- (void)setUpAvatarContainerViews;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;
- (id)share;
- (double)spacing;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateShadows;
- (void)updateUI;

@end

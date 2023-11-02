
@interface CKTranscriptUnavailabilityIndicatorCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol, IMUnavailabilityIndicatorChatItemDelegate> {
    bool  _displayingNotifyAnywayButton;
    UILabel * _unavailableTitleLabel;
    NSAttributedString * _unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
    NSAttributedString * _unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayingNotifyAnywayButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *unavailableTitleLabel;
@property (nonatomic, copy) NSAttributedString *unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
@property (nonatomic, copy) NSAttributedString *unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;

+ (id)reuseIdentifier;
+ (id)unavailableTitleLabel;

- (void).cxx_destruct;
- (void)_fadeInLabelAtStartTime:(double)arg1 completion:(id /* block */)arg2;
- (void)_updateUnavailableTitleLabelAttributedTextAnimated:(bool)arg1;
- (void)addFilter:(id)arg1;
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (void)displayNotifyAnywayButtonStateChanged:(id)arg1;
- (bool)displayingNotifyAnywayButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)arg1;
- (void)setDisplayingNotifyAnywayButton:(bool)arg1;
- (void)setUnavailableTitleLabel:(id)arg1;
- (void)setUnavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton:(id)arg1;
- (void)setUnavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton:(id)arg1;
- (id)unavailableTitleLabel;
- (id)unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
- (id)unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;

@end

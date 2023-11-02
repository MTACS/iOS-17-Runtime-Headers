
@interface CKTranscriptNotifyAnywayButtonCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol> {
    UIButton * _notifyAnywayButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *notifyAnywayButton;
@property (nonatomic, copy) NSAttributedString *notifyAnywayButtonAttributedText;
@property (readonly) Class superclass;

+ (id)notifyAnywayButton;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fadeInLabelAtStartTime:(double)arg1 completion:(id /* block */)arg2;
- (void)addFilter:(id)arg1;
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)notifyAnywayButton;
- (id)notifyAnywayButtonAttributedText;
- (void)performInsertion:(id /* block */)arg1;
- (void)setNotifyAnywayButton:(id)arg1;
- (void)setNotifyAnywayButtonAttributedText:(id)arg1;

@end

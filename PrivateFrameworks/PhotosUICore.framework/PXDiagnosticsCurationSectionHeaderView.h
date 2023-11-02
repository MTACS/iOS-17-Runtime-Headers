
@interface PXDiagnosticsCurationSectionHeaderView : UICollectionViewCell {
    NSString * _agentAndStage;
    UILabel * _agentAndStageLabel;
    NSString * _reason;
    UILabel * _reasonLabel;
    NSDictionary * _sectionInfo;
    NSString * _state;
    PXStateBadgeView * _stateBadgeView;
}

@property (nonatomic, retain) NSString *agentAndStage;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSDictionary *sectionInfo;
@property (nonatomic, retain) NSString *state;

- (void).cxx_destruct;
- (id)agentAndStage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)reason;
- (id)sectionInfo;
- (void)setAgentAndStage:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end

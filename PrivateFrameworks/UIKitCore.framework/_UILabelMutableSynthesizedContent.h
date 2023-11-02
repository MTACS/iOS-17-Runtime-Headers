
@interface _UILabelMutableSynthesizedContent : _UILabelSynthesizedContent

@property (nonatomic, retain) _UILabelContent *content;
@property (nonatomic) bool disableLinkHypenation;
@property (nonatomic) bool eliminateShadows;
@property (nonatomic) bool overallWritingDirectionFollowsLayoutDirection;
@property (nonatomic, retain) UIColor *overrideTextColor;
@property (nonatomic) long long semanticContentAttribute;
@property (nonatomic, copy) NSTextEncapsulation *textEncapsulation;

- (void)_resetSynthesizedResults;
- (id)initWithContent:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDisableLinkHypenation:(bool)arg1;
- (void)setEliminateShadows:(bool)arg1;
- (void)setOverallWritingDirectionFollowsLayoutDirection:(bool)arg1;
- (void)setOverrideTextColor:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setTextEncapsulation:(id)arg1;

@end

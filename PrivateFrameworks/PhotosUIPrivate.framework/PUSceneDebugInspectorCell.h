
@interface PUSceneDebugInspectorCell : UITableViewCell {
    UILabel * _countLabel;
    UILabel * _coverageLabel;
    UILabel * _isIndexedLabel;
    UILabel * _keywordLabel;
    UILabel * _sceneIdentifierLabel;
    UILabel * _synonymsLabel;
    UILabel * _thresholdLabel;
    PUSceneDebugInspectorSceneViewModel * _viewModel;
}

@property (nonatomic, retain) UILabel *countLabel;
@property (nonatomic, retain) UILabel *coverageLabel;
@property (nonatomic, retain) UILabel *isIndexedLabel;
@property (nonatomic, retain) UILabel *keywordLabel;
@property (nonatomic, retain) UILabel *sceneIdentifierLabel;
@property (nonatomic, retain) UILabel *synonymsLabel;
@property (nonatomic, retain) UILabel *thresholdLabel;
@property (nonatomic, retain) PUSceneDebugInspectorSceneViewModel *viewModel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)countLabel;
- (id)coverageLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)isIndexedLabel;
- (id)keywordLabel;
- (void)prepareForReuse;
- (id)sceneIdentifierLabel;
- (void)setCountLabel:(id)arg1;
- (void)setCoverageLabel:(id)arg1;
- (void)setIsIndexedLabel:(id)arg1;
- (void)setKeywordLabel:(id)arg1;
- (void)setSceneIdentifierLabel:(id)arg1;
- (void)setSynonymsLabel:(id)arg1;
- (void)setThresholdLabel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)synonymsLabel;
- (id)thresholdLabel;
- (id)viewModel;

@end

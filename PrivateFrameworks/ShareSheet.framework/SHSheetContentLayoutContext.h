
@interface SHSheetContentLayoutContext : NSObject {
    NSDiffableDataSourceSnapshot * _dataSourceSnapshot;
    bool  _enableHeroActions;
    bool  _enableSectionFooter;
    bool  _enableTopContentSectionText;
    <NSCollectionLayoutEnvironment> * _environment;
    double  _sectionBottomContentInset;
    NSString * _sectionIdentifier;
    double  _sectionTopContentInset;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _viewDirectionalLayoutMargins;
}

@property (nonatomic, readonly) NSDiffableDataSourceSnapshot *dataSourceSnapshot;
@property (nonatomic) bool enableHeroActions;
@property (nonatomic) bool enableSectionFooter;
@property (nonatomic) bool enableTopContentSectionText;
@property (nonatomic, readonly) <NSCollectionLayoutEnvironment> *environment;
@property (nonatomic) double sectionBottomContentInset;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic) double sectionTopContentInset;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } viewDirectionalLayoutMargins;

- (void).cxx_destruct;
- (id)dataSourceSnapshot;
- (bool)enableHeroActions;
- (bool)enableSectionFooter;
- (bool)enableTopContentSectionText;
- (id)environment;
- (id)initWithSectionIdentifier:(id)arg1 dataSourceSnapshot:(id)arg2 environment:(id)arg3;
- (double)sectionBottomContentInset;
- (id)sectionIdentifier;
- (double)sectionTopContentInset;
- (void)setEnableHeroActions:(bool)arg1;
- (void)setEnableSectionFooter:(bool)arg1;
- (void)setEnableTopContentSectionText:(bool)arg1;
- (void)setSectionBottomContentInset:(double)arg1;
- (void)setSectionTopContentInset:(double)arg1;
- (void)setViewDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })viewDirectionalLayoutMargins;

@end

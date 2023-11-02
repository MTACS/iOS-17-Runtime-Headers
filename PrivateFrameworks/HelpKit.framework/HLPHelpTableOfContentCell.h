
@interface HLPHelpTableOfContentCell : UITableViewCell {
    bool  _RTL;
    UIImageView * _arrowImageView;
    NSLayoutConstraint * _arrowImageViewLeadingConstraint;
    bool  _closed;
    HLPHelpItem * _helpItem;
    bool  _ignoreLevels;
    NSLayoutConstraint * _labelLeadingConstraint;
    UILabel * _nameLabel;
    bool  _searchResult;
    NSLayoutConstraint * _sectionImageLeadingConstraint;
    HLPURLSessionItem * _sectionImageURLSessionItem;
    UIImageView * _sectionImageView;
    NSLayoutConstraint * _sectionImageWidthConstraint;
    bool  _showFirstLevelIcon;
    bool  _updateSeparatorInsetAutomatically;
}

@property (nonatomic) bool RTL;
@property (nonatomic, retain) UIImageView *arrowImageView;
@property (nonatomic) bool closed;
@property (nonatomic, retain) HLPHelpItem *helpItem;
@property (nonatomic) bool ignoreLevels;
@property (nonatomic, retain) UILabel *nameLabel;
@property (getter=isSearchResult, nonatomic) bool searchResult;
@property (nonatomic, retain) HLPURLSessionItem *sectionImageURLSessionItem;
@property (nonatomic, retain) UIImageView *sectionImageView;
@property (nonatomic) bool showFirstLevelIcon;
@property (nonatomic) bool updateSeparatorInsetAutomatically;

- (void).cxx_destruct;
- (bool)RTL;
- (id)accessibilityLabel;
- (id)arrowImageView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arrowTransform;
- (void)cancelIconRequest;
- (bool)closed;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)helpItem;
- (bool)ignoreLevels;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSearchResult;
- (long long)itemLevel;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)prepareForReuse;
- (id)sectionImageURLSessionItem;
- (id)sectionImageView;
- (void)setArrowImageView:(id)arg1;
- (void)setClosed:(bool)arg1;
- (void)setHelpItem:(id)arg1;
- (void)setIgnoreLevels:(bool)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSearchResult:(bool)arg1;
- (void)setSectionImageURLSessionItem:(id)arg1;
- (void)setSectionImageView:(id)arg1;
- (void)setShowFirstLevelIcon:(bool)arg1;
- (void)setUpdateSeparatorInsetAutomatically:(bool)arg1;
- (bool)showFirstLevelIcon;
- (void)toggle;
- (void)updateConstraints;
- (bool)updateSeparatorInsetAutomatically;
- (void)updateToggleImageAnimated:(bool)arg1;

@end

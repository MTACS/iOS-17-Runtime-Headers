
@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell {
    bool  _collapsedBeneath;
    <UIDebuggingInformationHierarchyCellDelegate> * _delegate;
    UIButton * _disclosureButton;
    NSLayoutConstraint * _disclosureButtonAvailableConstraint;
    NSLayoutConstraint * _disclosureButtonUnavailableConstraint;
    bool  _disclosureIndicatorHidden;
    NSIndexPath * _indexPath;
    UIButton * _infoButton;
    UILabel * _mainLabel;
    NSString * _name;
}

@property (nonatomic) <UIDebuggingInformationHierarchyCellDelegate> *delegate;
@property (nonatomic) bool disclosureIndicatorHidden;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) UIButton *infoButton;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)delegate;
- (void)deliverToggle;
- (bool)disclosureIndicatorHidden;
- (void)displayDetailsForCell;
- (id)indexPath;
- (id)infoButton;
- (void)layoutSubviews;
- (id)name;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureIndicatorHidden:(bool)arg1;
- (void)setName:(id)arg1;

@end

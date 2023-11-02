
@interface SFSiteIconCell : UICollectionViewCell <WBSStartPageIconProxy> {
    UIView * _iconDimmingView;
    _SFSiteIconView * _iconView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIView *contextMenuPreviewView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *visualEffectGroupName;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setAction:(id)arg1;
- (void)_setAction:(id)arg1 backgroundEffect:(id)arg2;
- (void)configureUsingAction:(id)arg1 backgroundEffect:(id)arg2;
- (id)contextMenuPreviewView;
- (id)focusEffect;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconFromAction:(id)arg1;
- (void)setIconFromBookmark:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisualEffectGroupName:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)updateConstraints;
- (void)updateViewsDependingOnCustomTraits;
- (id)visualEffectGroupName;

@end


@interface HUTriggerHeaderCell : UITableViewCell <HUCellProtocol> {
    NSArray * _constraints;
    double  _contentBottomMargin;
    HFItem * _item;
    HUGridLayoutOptions * _layoutOptions;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) double contentBottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (id)constraints;
- (double)contentBottomMargin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)layoutOptions;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setContentBottomMargin:(double)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end

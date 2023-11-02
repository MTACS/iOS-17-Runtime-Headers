
@interface HUInstructionsCell : UITableViewCell <HUCellProtocol, UITextViewDelegate> {
    NSArray * _constraints;
    double  _contentBottomMargin;
    UITextView * _descriptionView;
    bool  _hidesTopSpacing;
    HFItem * _item;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) double contentBottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextView *descriptionView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesTopSpacing;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)constraints;
- (double)contentBottomMargin;
- (id)descriptionView;
- (bool)hidesTopSpacing;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setContentBottomMargin:(double)arg1;
- (void)setDescriptionView:(id)arg1;
- (void)setHidesTopSpacing:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end

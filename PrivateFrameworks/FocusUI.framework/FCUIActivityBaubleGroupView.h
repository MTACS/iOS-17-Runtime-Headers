
@interface FCUIActivityBaubleGroupView : UIView <FCUIContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    long long  _baubleGroupType;
    NSArray * _baubleViews;
    NSString * _preferredContentSizeCategory;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly) long long baubleGroupType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (long long)baubleGroupType;
- (id)initWithBaubleDescriptions:(id)arg1 baubleGroupType:(long long)arg2;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

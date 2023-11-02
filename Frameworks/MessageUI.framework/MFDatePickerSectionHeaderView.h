
@interface MFDatePickerSectionHeaderView : UICollectionReusableView <MFReusableIdentifiable> {
    UILabel * _label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (readonly) Class superclass;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setLabel:(id)arg1;

@end

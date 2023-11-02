
@interface CKDetailsSIMCell : CKDetailsCell <CKDetailsCell> {
    UIButton * _button;
    UIMenu * _menu;
    UILabel * _simLabel;
}

@property (nonatomic, retain) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic, readonly) UILabel *simLabel;
@property (readonly) Class superclass;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)button;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 simLabelText:(id)arg3;
- (void)layoutSubviews;
- (id)menu;
- (void)prepareForReuse;
- (void)setButton:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setSIMLabelText:(id)arg1;
- (id)simLabel;

@end

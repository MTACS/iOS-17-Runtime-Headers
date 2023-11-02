
@interface WFAppearanceProxy : NSObject {
    UIFont * _cellTextLabelFont;
    UIColor * _tableViewCellBackgroundColor;
    long long  _tableViewStyle;
}

@property (nonatomic) UIFont *cellTextLabelFont;
@property (nonatomic, retain) UIColor *tableViewCellBackgroundColor;
@property (nonatomic) long long tableViewStyle;

+ (id)defaultAppearanceProxy;
+ (id)setupAppearanceProxy;

- (void).cxx_destruct;
- (void)apply;
- (id)cellTextLabelFont;
- (void)setCellTextLabelFont:(id)arg1;
- (void)setTableViewCellBackgroundColor:(id)arg1;
- (void)setTableViewStyle:(long long)arg1;
- (id)tableViewCellBackgroundColor;
- (long long)tableViewStyle;

@end

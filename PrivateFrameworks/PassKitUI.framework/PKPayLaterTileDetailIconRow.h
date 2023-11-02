
@interface PKPayLaterTileDetailIconRow : NSObject <PKPayLaterCollectionViewRow> {
    double  _additionalIconPadding;
    bool  _centerDetailText;
    bool  _centerTitleText;
    NSString * _detail;
    UIFont * _detailFont;
    UIColor * _detailTextColor;
    UIImage * _icon;
    NSString * _title;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
}

@property (nonatomic) double additionalIconPadding;
@property (nonatomic) bool centerDetailText;
@property (nonatomic) bool centerTitleText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detail;
@property (nonatomic, retain) UIFont *detailFont;
@property (nonatomic, retain) UIColor *detailTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (double)additionalIconPadding;
- (Class)cellClass;
- (bool)centerDetailText;
- (bool)centerTitleText;
- (void)configureCell:(id)arg1;
- (id)detail;
- (id)detailFont;
- (id)detailTextColor;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 iconImage:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setAdditionalIconPadding:(double)arg1;
- (void)setCenterDetailText:(bool)arg1;
- (void)setCenterTitleText:(bool)arg1;
- (void)setDetail:(id)arg1;
- (void)setDetailFont:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (id)title;
- (id)titleFont;
- (id)titleTextColor;

@end

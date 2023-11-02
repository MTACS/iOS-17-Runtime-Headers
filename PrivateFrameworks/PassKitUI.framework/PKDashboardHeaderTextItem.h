
@interface PKDashboardHeaderTextItem : NSObject <PKDashboardItem> {
    id /* block */  _action;
    UIColor * _actionColor;
    UIImage * _actionImage;
    unsigned long long  _actionStyle;
    NSString * _actionTitle;
    UIMenu * _menu;
    unsigned long long  _style;
    NSString * _title;
    UIColor * _titleColor;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) UIColor *actionColor;
@property (nonatomic, copy) UIImage *actionImage;
@property (nonatomic) unsigned long long actionStyle;
@property (nonatomic, copy) NSString *actionTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIMenu *menu;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) UIColor *titleColor;

+ (id)identifier;
+ (id)itemWithHeaderText:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)actionColor;
- (id)actionImage;
- (unsigned long long)actionStyle;
- (id)actionTitle;
- (id)menu;
- (void)setAction:(id /* block */)arg1;
- (void)setActionColor:(id)arg1;
- (void)setActionImage:(id)arg1;
- (void)setActionStyle:(unsigned long long)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (unsigned long long)style;
- (id)title;
- (id)titleColor;

@end

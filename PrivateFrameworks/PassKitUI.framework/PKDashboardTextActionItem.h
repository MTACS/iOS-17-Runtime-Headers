
@interface PKDashboardTextActionItem : NSObject <PKDashboardItem> {
    UIColor * _accessoryColor;
    UIImage * _accessoryImage;
    id /* block */  _action;
    long long  _actionStyle;
    UIImage * _icon;
    long long  _layoutStyle;
    NSString * _subtitle;
    UIColor * _subtitleColor;
    UIImage * _subtitleImage;
    NSString * _title;
    UIColor * _titleColor;
    UIImage * _titleImage;
}

@property (nonatomic, retain) UIColor *accessoryColor;
@property (nonatomic, retain) UIImage *accessoryImage;
@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) long long actionStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UIColor *subtitleColor;
@property (nonatomic, retain) UIImage *subtitleImage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIImage *titleImage;

+ (id)colorForSemanticColor:(long long)arg1 hasTintColor:(bool*)arg2;
+ (id)identifier;
+ (id)imageForPassFieldImage:(id)arg1 hasTintColor:(bool)arg2;

- (void).cxx_destruct;
- (id)accessoryColor;
- (id)accessoryImage;
- (id /* block */)action;
- (long long)actionStyle;
- (id)icon;
- (long long)layoutStyle;
- (void)setAccessoryColor:(id)arg1;
- (void)setAccessoryImage:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setActionStyle:(long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setSubtitleImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (id)subtitle;
- (id)subtitleColor;
- (id)subtitleImage;
- (id)title;
- (id)titleColor;
- (id)titleImage;

@end

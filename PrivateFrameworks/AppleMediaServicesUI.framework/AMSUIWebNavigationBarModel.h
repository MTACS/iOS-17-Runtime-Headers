
@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface> {
    AMSUIWebBarButtonItemModel * _accessoryBarButtonItemModel;
    NSString * _backButtonTitle;
    NSString * _backgroundColor;
    long long  _backgroundStyle;
    bool  _hidesBackButton;
    AMSUIWebBarButtonItemModel * _leftBarButtonItemModel;
    NSArray * _otherBarButtonItemModels;
    AMSUIWebBarButtonItemModel * _rightBarButtonItemModel;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, retain) AMSUIWebBarButtonItemModel *accessoryBarButtonItemModel;
@property (nonatomic, retain) NSString *backButtonTitle;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesBackButton;
@property (nonatomic, readonly) bool includesLeftItems;
@property (nonatomic, readonly) bool includesRightItems;
@property (nonatomic, retain) AMSUIWebBarButtonItemModel *leftBarButtonItemModel;
@property (nonatomic, retain) NSArray *otherBarButtonItemModels;
@property (nonatomic, retain) AMSUIWebBarButtonItemModel *rightBarButtonItemModel;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)accessoryBarButtonItemModel;
- (id)backButtonTitle;
- (id)backgroundColor;
- (long long)backgroundStyle;
- (id)description;
- (bool)hidesBackButton;
- (bool)includesLeftItems;
- (bool)includesRightItems;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)leftBarButtonItemModel;
- (id)otherBarButtonItemModels;
- (id)rightBarButtonItemModel;
- (void)setAccessoryBarButtonItemModel:(id)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setHidesBackButton:(bool)arg1;
- (void)setLeftBarButtonItemModel:(id)arg1;
- (void)setOtherBarButtonItemModels:(id)arg1;
- (void)setRightBarButtonItemModel:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end

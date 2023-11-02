
@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface> {
    NSString * _accessibilityLabel;
    <AMSUIWebActionRunnable> * _action;
    id /* block */  _actionBlock;
    AMSUIWebActivityIndicatorModel * _activityIndicator;
    bool  _bold;
    bool  _enabled;
    NSString * _identifier;
    NSString * _keyEquivalent;
    long long  _style;
    NSString * _systemImageName;
    NSString * _title;
    NSDictionary * _underlyingJSObject;
}

@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, retain) <AMSUIWebActionRunnable> *action;
@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, retain) AMSUIWebActivityIndicatorModel *activityIndicator;
@property (nonatomic) bool bold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *keyEquivalent;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *systemImageName;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDictionary *underlyingJSObject;

- (void).cxx_destruct;
- (long long)_barButtonItemStyle;
- (id)_createProxCardItemWithActionBlock:(id /* block */)arg1;
- (id)_createSpinnerItem;
- (id)_imageForButtonWithNavStyle:(long long)arg1;
- (id)accessibilityLabel;
- (id)action;
- (id /* block */)actionBlock;
- (id)activityIndicator;
- (bool)bold;
- (id)createBarButtonItemWithNavigationBarModel:(id)arg1 actionBlock:(id /* block */)arg2;
- (id)createDialogAction;
- (id)description;
- (bool)enabled;
- (id)identifier;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)keyEquivalent;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setBold:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyEquivalent:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSystemImageName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnderlyingJSObject:(id)arg1;
- (long long)style;
- (id)systemImageName;
- (id)title;
- (id)underlyingJSObject;

@end


@interface NCSupplementaryViewPrototypeRecipeViewController : UIViewController <NCNotificationListBaseComponent> {
    bool  _adjustsFontForContentSizeCategory;
    NCNotificationListSupplementaryViewConfiguration * _configuration;
    NSDate * _dateModified;
    <NCSupplementaryViewPrototypeRecipeViewControllerDelegate> * _delegate;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly) NCNotificationListSupplementaryViewConfiguration *configuration;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSDate *dateModified;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCSupplementaryViewPrototypeRecipeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

+ (id)presentableTypes;
+ (id)title;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id /* block */)_testActionNotImplementedBlock;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (void)clearAll;
- (id)configuration;
- (unsigned long long)count;
- (id)dateModified;
- (id)delegate;
- (id)init;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDateModified:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateConfiguration:(id /* block */)arg1;
- (void)viewDidLoad;

@end

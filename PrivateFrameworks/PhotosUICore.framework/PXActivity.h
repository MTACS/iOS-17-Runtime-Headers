
@interface PXActivity : UIActivity <PXActivity> {
    <PXActivityActionDelegate> * _actionDelegate;
    NSString * _actionTitle;
    NSString * _actionType;
    UIImage * _cachedCustomImage;
    UIImage * _cachedSmallCustomImage;
    id /* block */  _canPerformActivityActionHandler;
    <PXActivityDataSource> * _dataSource;
    struct { 
        bool respondsToActivityViewControllerForActivity; 
        bool respondsToActivityItemsForActivity; 
    }  _dataSourceFlags;
    NSString * _internalActivityType;
    <PXActivityItemSourceController> * _itemSourceController;
    id /* block */  _performActivityActionHandler;
    NSString * _systemImageName;
}

@property (nonatomic, readonly) NSString *_systemImageName;
@property (nonatomic) <PXActivityActionDelegate> *actionDelegate;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) id /* block */ canPerformActivityActionHandler;
@property (nonatomic) <PXActivityDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (nonatomic, copy) id /* block */ performActivityActionHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemImageName;

+ (id)_destructiveActivities;
+ (id)activityWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4;

- (void).cxx_destruct;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_systemImageName;
- (id)actionDelegate;
- (id)actionTitle;
- (id)actionType;
- (id)activityTitle;
- (id)activityType;
- (id /* block */)canPerformActivityActionHandler;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)createActivityBundleImageConfigurationForBundle:(id)arg1 imageNamed:(id)arg2 activityCategory:(long long)arg3;
- (id)dataSource;
- (id)description;
- (id)initWithActionTitle:(id)arg1 actionType:(id)arg2 activityType:(id)arg3 systemImageName:(id)arg4;
- (id)itemSourceController;
- (void)performActivity;
- (id /* block */)performActivityActionHandler;
- (id)px_activityImageNamed:(id)arg1;
- (id)px_activitySettingsImageNamed:(id)arg1;
- (void)setActionDelegate:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setCanPerformActivityActionHandler:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setItemSourceController:(id)arg1;
- (void)setPerformActivityActionHandler:(id /* block */)arg1;
- (void)setSystemImageName:(id)arg1;
- (id)systemImageName;
- (void)tearDownForCompletion;
- (void)updateActivityViewControllerVisibleShareActions;

@end

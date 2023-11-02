
@interface MCUIBundleController : PSBundleController {
    <MCUIDataManagerProtocol> * _dataManager;
    PSListController * _parentController;
    NSObject<OS_dispatch_queue> * _queue;
    PSSpecifier * _specifier;
}

@property (nonatomic, retain) <MCUIDataManagerProtocol> *dataManager;
@property (nonatomic) PSListController *parentController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) PSSpecifier *specifier;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_detailsFromSpecifier:(id)arg1;
- (id)_initWithDataManager:(id)arg1;
- (void)_mcuiUpdated;
- (void)_reloadTopLevelSpecifier;
- (void)_sharedInitWithDataManager:(id)arg1;
- (bool)_swizzlingFromSpecifier:(id)arg1;
- (bool)_updateTopLevelSpecifier;
- (id)dataManager;
- (void)dealloc;
- (id)initWithParentListController:(id)arg1 dataManager:(id)arg2;
- (id)initWithParentListController:(id)arg1 properties:(id)arg2;
- (id)parentController;
- (id)queue;
- (void)setDataManager:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (id)specifiersWithSpecifier:(id)arg1;
- (void)unload;

@end

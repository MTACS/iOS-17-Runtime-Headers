
@interface DBIconLayoutVehicleDataProvider : NSObject <CRSIconLayoutVehicleDataProviding, DBIconModelApplicationDataSource, SBHIconManagerDelegate> {
    NSArray * _allApps;
    DBIconImageCache * _iconImageCache;
    DBIconManager * _iconManager;
    DBIconModel * _iconModel;
    NSString * _vehicleID;
}

@property (nonatomic, readonly, copy) NSArray *allApplicationIcons;
@property (nonatomic, retain) NSArray *allApps;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DBIconImageCache *iconImageCache;
@property (nonatomic, retain) DBIconManager *iconManager;
@property (nonatomic, retain) DBIconModel *iconModel;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *vehicleID;

+ (id)defaultIconState;

- (void).cxx_destruct;
- (id)allApplicationIcons;
- (id)allApps;
- (id)defaultIconStateForIconManager:(id)arg1;
- (void)getApplicationIconInformationForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)getIconStateWithCompletion:(id /* block */)arg1;
- (id)iconImageCache;
- (id)iconManager;
- (Class)iconManager:(id)arg1 folderControllerClassForFolderClass:(Class)arg2 proposedClass:(Class)arg3;
- (void)iconManager:(id)arg1 launchIconForIconView:(id)arg2;
- (bool)iconManagerCanBeginIconDrags:(id)arg1;
- (id)iconModel;
- (id)initWithVehicleID:(id)arg1 iconImageCache:(id)arg2;
- (long long)interfaceOrientationForIconManager:(id)arg1;
- (bool)isEditingAllowedForIconManager:(id)arg1;
- (void)resetIconState;
- (void)setAllApps:(id)arg1;
- (void)setIconImageCache:(id)arg1;
- (void)setIconManager:(id)arg1;
- (void)setIconModel:(id)arg1;
- (void)setIconState:(id)arg1;
- (void)setVehicleID:(id)arg1;
- (id)vehicleID;

@end

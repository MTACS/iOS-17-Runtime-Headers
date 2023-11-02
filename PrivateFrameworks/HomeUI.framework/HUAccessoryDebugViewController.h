
@interface HUAccessoryDebugViewController : HUItemTableViewController {
    HUAccessoryDebugModuleController * _debugModuleController;
    <HFHomeKitObject> * _homeKitObject;
}

@property (nonatomic, retain) HUAccessoryDebugModuleController *debugModuleController;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)debugModuleController;
- (id)homeKitObject;
- (id)initWithHomeKitObject:(id)arg1;
- (void)setDebugModuleController:(id)arg1;

@end

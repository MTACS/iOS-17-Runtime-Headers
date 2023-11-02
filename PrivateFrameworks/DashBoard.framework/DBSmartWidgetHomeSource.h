
@interface DBSmartWidgetHomeSource : DBSmartWidgetSource <DBHomeManagerObserver, DBHomeObserver> {
    DBHomeManager * _homeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DBHomeManager *homeManager;
@property (readonly) Class superclass;

+ (void)load;
+ (id)predictionClasses;
+ (id)sourceName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)freshPredictions;
- (void)home:(id)arg1 didUpdateLastUsedServiceOfType:(id)arg2;
- (void)homeDidChangeInRange:(id)arg1;
- (void)homeDidEnterExtendedRange:(id)arg1;
- (void)homeDidExitExtendedRange:(id)arg1;
- (id)homeManager;
- (void)homeManager:(id)arg1 didUpdateHomes:(id)arg2;
- (void)homeManager:(id)arg1 willRemoveHomes:(id)arg2;
- (id)initWithDelegate:(id)arg1 resourceProvider:(id)arg2;

@end

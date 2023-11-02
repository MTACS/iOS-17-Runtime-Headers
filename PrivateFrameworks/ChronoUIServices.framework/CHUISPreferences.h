
@interface CHUISPreferences : NSObject {
    bool  _debugPrefersStaticSnapshots;
    bool  _debugSnapshotViewColoring;
    bool  _debugViewLabels;
    NSUserDefaults * _defaults;
    bool  _enableMemoryStressTestingWithGaspar;
    NSString * _widgetRenderer;
}

@property (nonatomic, readonly) bool debugPrefersStaticSnapshots;
@property (nonatomic, readonly) bool debugSnapshotViewColoring;
@property (nonatomic, readonly) bool debugViewLabels;
@property (nonatomic, readonly) bool enableMemoryStressTestingWithGaspar;
@property (nonatomic, readonly) NSString *widgetRenderer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)debugPrefersStaticSnapshots;
- (bool)debugSnapshotViewColoring;
- (bool)debugViewLabels;
- (bool)enableMemoryStressTestingWithGaspar;
- (id)init;
- (id)widgetRenderer;

@end

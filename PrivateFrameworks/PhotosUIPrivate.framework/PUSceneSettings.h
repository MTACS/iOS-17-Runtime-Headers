
@interface PUSceneSettings : PXSettings {
    unsigned long long  _inspectorSortOrder;
    bool  _showConfidenceOverlay;
}

@property (nonatomic) unsigned long long inspectorSortOrder;
@property (nonatomic) bool showConfidenceOverlay;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (unsigned long long)inspectorSortOrder;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setInspectorSortOrder:(unsigned long long)arg1;
- (void)setShowConfidenceOverlay:(bool)arg1;
- (bool)showConfidenceOverlay;

@end


@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem {
    NSSet * _layerNames;
    NSString * _processName;
}

@property (nonatomic, copy) NSSet *layerNames;
@property (nonatomic, copy) NSString *processName;

- (void).cxx_destruct;
- (id)_buildVersion;
- (bool)ignoreIfAlreadyDisplaying;
- (id)layerNames;
- (id)message;
- (id)processName;
- (long long)radarClassification;
- (id)radarDescription;
- (long long)radarReproducibility;
- (id)radarTitle;
- (void)setLayerNames:(id)arg1;
- (void)setProcessName:(id)arg1;
- (bool)shouldShowInLockScreen;
- (id)title;

@end

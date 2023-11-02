
@protocol PXStoryDiagnosticHUDDataSource

@required

- (unsigned long long)HUDContentChangeDescriptor;
- (PXObservable *)HUDObservable;
- (PXStoryRelatedController *)HUDRelatedController;
- (PXStoryModel *)HUDStoryModel;
- (unsigned long long)HUDStoryModelChangeDescriptor;
- (unsigned long long)HUDVisibiltyChangeDescriptor;
- (<PXStoryDiagnosticHUDContentProvider> *)diagnosticHUDContentProviderForType:(long long)arg1;
- (long long)diagnosticHUDType;
- (bool)isHUDVisible;

@end


@protocol QLPreviewingController_Private <QLPreviewingController>

@optional

- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(NSNumber *)arg1;
- (void)hostSceneWillDeactivate;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (<QLPrintingProtocol> *)printer;
- (void)setAppearance:(QLAppearance *)arg1 animated:(bool)arg2;

@end

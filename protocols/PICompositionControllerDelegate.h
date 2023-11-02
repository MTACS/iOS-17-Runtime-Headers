
@protocol PICompositionControllerDelegate <NSObject>

@optional

- (Class)compositionController:(PICompositionController *)arg1 adjustmentControllerClassForKey:(NSString *)arg2;
- (void)compositionController:(PICompositionController *)arg1 didAddAdjustment:(NSString *)arg2;
- (void)compositionController:(PICompositionController *)arg1 didRemoveAdjustment:(NSString *)arg2;
- (void)compositionController:(PICompositionController *)arg1 didUpdateAdjustment:(NSString *)arg2;
- (void)compositionController:(PICompositionController *)arg1 didUpdateAdjustments:(NSArray *)arg2;

@end

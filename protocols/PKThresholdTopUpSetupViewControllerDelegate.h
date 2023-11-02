
@protocol PKThresholdTopUpSetupViewControllerDelegate <NSObject>

@required

- (void)thresholdTopUpDidSelectCancel:(PKThresholdTopUpSetupViewController *)arg1;
- (void)thresholdTopUpDidSelectContinue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKThresholdTopUpSetupViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)thresholdTopUpDidSelectUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKThresholdTopUpSetupViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)thresholdTopUpPerformCancel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKThresholdTopUpSetupViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

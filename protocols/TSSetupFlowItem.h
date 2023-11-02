
@protocol TSSetupFlowItem <NSObject>

@required

- (void)setDelegate:(id <TSSIMSetupFlowDelegate>)arg1;

@optional

- (long long)backOption;
- (bool)customizeSpinner;
- (bool)isStartOverRequiredOnBackButtonTapped;
- (void)prepare:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)userInteractionEnabled;

@end

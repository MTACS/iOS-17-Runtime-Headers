
@interface CRNFluidSplitViewInteraction : NSObject {
    UIViewController * _primaryController;
    UISplitViewController * _splitViewController;
    UIViewController * _supplementalController;
}

+ (id)newWithSplitViewController:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)composerBlock;

@end

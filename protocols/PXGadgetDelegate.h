
@protocol PXGadgetDelegate <NSObject>

@required

- (void)dismissGadgetViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSObject<PXAnonymousViewController> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)gadget:(void *)arg1 transitionToViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: <PXGadget> *, NSObject<PXAnonymousViewController> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<PXGadgetTransition> *)gadgetTransition;
- (void)presentGadgetViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSObject<PXAnonymousViewController> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<PXPresentationEnvironment> *)presentationEnvironmentForGadget:(id <PXGadget>)arg1;
- (PXGadgetNavigationHelper *)rootNavigationHelper;

@optional

- (void)gadget:(void *)arg1 animateChanges:(void *)arg2; // needs 2 arg types, found 6: <PXGadget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)gadget:(id <PXGadget>)arg1 didChange:(unsigned long long)arg2;
- (NSObject<PXAnonymousViewController> *)gadgetViewControllerHostingGadget:(id <PXGadget>)arg1;
- (<PXGadgetDelegate> *)nextGadgetResponder;
- (void)setNextGadgetResponder:(id <PXGadgetDelegate>)arg1;

@end

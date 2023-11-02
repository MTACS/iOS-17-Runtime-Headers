
@interface PXGadgetProvider : NSObject <PXGadgetDelegate, PXMutableGadgetProvider> {
    <PXGadgetProviderDelegate> * _delegate;
    NSArray * _gadgets;
    NSString * _identifier;
    bool  _invalidGadgets;
    bool  _isPerformingChanges;
    <PXGadgetDelegate> * _nextGadgetResponder;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXGadgetTransition> *gadgetTransition;
@property (copy) NSArray *gadgets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool invalidGadgets;
@property (nonatomic) bool isPerformingChanges;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_teardownGadget:(id)arg1;
- (void)_updateIfNeeded;
- (void)addGadgets:(id)arg1;
- (id)delegate;
- (void)dismissGadgetViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)gadget:(id)arg1 animateChanges:(id /* block */)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (bool)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)gadgetTransition;
- (id)gadgetViewControllerHostingGadget:(id)arg1;
- (id)gadgets;
- (void)generateGadgets;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)insertGadgets:(id)arg1 atIndexes:(id)arg2;
- (bool)invalidGadgets;
- (bool)isPerformingChanges;
- (void)loadDataForGadgets;
- (void)loadDataForPriority;
- (id)nextGadgetResponder;
- (void)pauseLoadingRemainingData;
- (void)performChanges:(id /* block */)arg1;
- (void)presentGadgetViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationEnvironmentForGadget:(id)arg1;
- (void)removeAllGadgets;
- (void)removeGadgets:(id)arg1;
- (void)removeGadgetsAtIndexes:(id)arg1;
- (id)rootNavigationHelper;
- (void)setDelegate:(id)arg1;
- (void)setGadgets:(id)arg1;
- (void)setInvalidGadgets:(bool)arg1;
- (void)setIsPerformingChanges:(bool)arg1;
- (void)setNextGadgetResponder:(id)arg1;
- (void)startLoadingRemainingData;

@end


@interface INUICKPSynchronousRemoteViewControllerAllocator : NSObject <INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPViewControllerAllocating> {
    NSMutableArray * _finalInterfaceSections;
    NSMutableSet * _handledParameters;
    INInteraction * _interaction;
    NSMutableArray * _mutableRedundantInterfaceSections;
    NSMutableArray * _mutableSynchronousRemoteViewControllers;
    NSMutableDictionary * _mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
    bool  _requiresUserConsent;
    Class  _synchronousRemoteViewControllerClass;
    <INUICKPViewControllerAllocatingDelegate> * delegate;
}

@property (nonatomic, readonly, copy) NSArray *allocatedViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUICKPViewControllerAllocatingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *finalInterfaceSections;
@property (nonatomic, readonly) NSMutableSet *handledParameters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INInteraction *interaction;
@property (nonatomic, readonly) NSMutableArray *mutableRedundantInterfaceSections;
@property (nonatomic, readonly) NSMutableArray *mutableSynchronousRemoteViewControllers;
@property (nonatomic, readonly) NSMutableDictionary *mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
@property (nonatomic, readonly, copy) NSArray *redundantInterfaceSections;
@property (nonatomic) bool requiresUserConsent;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *viewControllersByInitialInterfaceSection;

- (void).cxx_destruct;
- (void)_beginRecursivelyConnectingForInterfaceSectionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)_recursivelyConnectForInterfaceSectionQueue:(id)arg1 recursionDepth:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)_unhandledParametersForInterfaceSection:(id)arg1;
- (id)allocatedViewControllers;
- (double)boundingWidthForSynchronousRemoteViewController:(id)arg1;
- (id)delegate;
- (id)finalInterfaceSections;
- (id)handledParameters;
- (id)init;
- (id)interaction;
- (id)mutableRedundantInterfaceSections;
- (id)mutableSynchronousRemoteViewControllers;
- (id)mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
- (id)organizedInterfaceSections;
- (void)performAllocationsFromInteraction:(id)arg1 initialInterfaceSections:(id)arg2 completion:(id /* block */)arg3;
- (id)redundantInterfaceSections;
- (bool)requiresUserConsent;
- (void)setDelegate:(id)arg1;
- (void)setInteraction:(id)arg1;
- (void)setRequiresUserConsent:(bool)arg1;
- (void)setSynchronousRemoteViewControllerClass:(Class)arg1;
- (id)viewControllersByInitialInterfaceSection;

@end

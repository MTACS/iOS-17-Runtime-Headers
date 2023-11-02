
@protocol INUICKPViewControllerAllocating <NSObject>

@required

- (NSArray *)allocatedViewControllers;
- (void)performAllocationsFromInteraction:(void *)arg1 initialInterfaceSections:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: INInteraction *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)redundantInterfaceSections;
- (bool)requiresUserConsent;
- (void)setRequiresUserConsent:(bool)arg1;
- (NSDictionary *)viewControllersByInitialInterfaceSection;

@optional

- (<INUICKPViewControllerAllocatingDelegate> *)delegate;
- (void)setDelegate:(id <INUICKPViewControllerAllocatingDelegate>)arg1;

@end

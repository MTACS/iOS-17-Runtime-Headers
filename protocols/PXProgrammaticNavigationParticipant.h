
@protocol PXProgrammaticNavigationParticipant <NSObject>

@required

- (<PXProgrammaticNavigationParticipant> *)nextExistingParticipantOnRouteToDestination:(PXProgrammaticNavigationDestination *)arg1;
- (PXProgrammaticNavigationDestination *)px_navigationDestination;
- (unsigned long long)routingOptionsForDestination:(PXProgrammaticNavigationDestination *)arg1;

@optional

- (void)navigateToDestination:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: PXProgrammaticNavigationDestination *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)provideViewControllersForDestination:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: PXProgrammaticNavigationDestination *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, long long, NSError *, void*

@end

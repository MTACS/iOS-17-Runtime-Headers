
@protocol PKDashboardMoreMenuFactoryEligibility <NSObject>

@required

- (bool)hasCachedEligibility;
- (bool)isEligibile;
- (void)isEligibleWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
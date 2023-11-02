
@protocol DMTInternetReachabilityPrimitives <NSObject>

@required

- (bool)reachable;
- (void)setStatusChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id /* block */)statusChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL

@end

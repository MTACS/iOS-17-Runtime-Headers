
@protocol HMDAccessoryAssociation <NSObject>

@required

- (void)associateToHome:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMDHome *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)supportsAssociation;

@end

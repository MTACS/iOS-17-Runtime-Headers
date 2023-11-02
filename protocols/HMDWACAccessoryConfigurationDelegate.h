
@protocol HMDWACAccessoryConfigurationDelegate

@required

- (void)requestPermissionToAssociateWACAccessory:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMDUnassociatedWACAccessory *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)unassociatedWACAccessoryDidFinishAssociation:(HMDUnassociatedWACAccessory *)arg1 withError:(NSError *)arg2;
- (void)unassociatedWACAccessoryDidStartAssociation:(HMDUnassociatedWACAccessory *)arg1;

@end

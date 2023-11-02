
@protocol HMDUserDeviceCapabilitiesRequestManager <NSObject>

@required

- (void)electDeviceForUserID:(void *)arg1 destination:(void *)arg2 deviceCapabilities:(void *)arg3 responseTimeout:(void *)arg4 responseQueue:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 13: NSString *, NSString *, NSDictionary *, double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, HMDDeviceHandle *, NSDictionary *, void*

@end

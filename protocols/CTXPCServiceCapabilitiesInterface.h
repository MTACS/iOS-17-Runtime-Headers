
@protocol CTXPCServiceCapabilitiesInterface

@required

- (void)context:(void *)arg1 addPhoneServicesDevice:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)context:(void *)arg1 canSetCapability:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: CTXPCServiceSubscriptionContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (void)context:(void *)arg1 getCapability:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: CTXPCServiceSubscriptionContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (void)context:(void *)arg1 getSystemCapabilities:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)context:(void *)arg1 isMandatoryDisabledVoLTE:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)context:(void *)arg1 mandatoryDisableVoLTE:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)context:(void *)arg1 recheckPhoneServicesAccountStatus:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)context:(void *)arg1 removePhoneServicesDevice:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)context:(void *)arg1 setCapability:(void *)arg2 enabled:(void *)arg3 info:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, NSString *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getPhoneServicesDeviceInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getPhoneServicesDeviceList:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getSupports5G:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)wifiCallingCTFollowUpComplete:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

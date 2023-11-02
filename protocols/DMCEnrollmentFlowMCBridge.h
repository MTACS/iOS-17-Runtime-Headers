
@protocol DMCEnrollmentFlowMCBridge <NSObject>

@optional

- (void)blockAppInstallsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)detailsFromMDMProfile:(NSData *)arg1 error:(id*)arg2;
- (NSData *)getMachineInfoForEnrollmentType:(unsigned long long)arg1 enrollmentMethod:(unsigned long long)arg2;
- (void)installEnrollmentProfile:(void *)arg1 devicePasscode:(void *)arg2 personaID:(void *)arg3 rmAccountIdentifier:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 12: NSData *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*
- (void)installEnrollmentProfile:(void *)arg1 devicePasscode:(void *)arg2 personaID:(void *)arg3 rmAccountIdentifier:(void *)arg4 isESSO:(void *)arg5 essoAppITunesStoreID:(void *)arg6 managedProfileIdentifiers:(void *)arg7 installationSource:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 16: NSData *, NSString *, NSString *, NSString *, bool, NSNumber *, NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*
- (void)installEnrollmentProfile:(void *)arg1 devicePasscode:(void *)arg2 personaID:(void *)arg3 rmAccountIdentifier:(void *)arg4 managedProfileIdentifiers:(void *)arg5 installationSource:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 14: NSData *, NSString *, NSString *, NSString *, NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*
- (bool)isDeviceMDMEnrolled;
- (bool)isDevicePasscodeSet;
- (bool)isDeviceSharediPad;
- (bool)isDeviceSupervised;
- (bool)isMDMProfileLocked;
- (void)manageApplicationWithBundleID:(void *)arg1 iTunesItemID:(void *)arg2 organization:(void *)arg3 personaID:(void *)arg4 associatedDomains:(void *)arg5 associatedDomainsEnableDirectDownloads:(void *)arg6 configuration:(void *)arg7 completionHandler:(void *)arg8; // needs 8 arg types, found 13: NSString *, NSNumber *, NSString *, NSString *, NSArray *, NSNumber *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reauthenticationComplete;
- (void)removeApplicationWithBundleID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)removeProfileAssociatedWithPersonaID:(NSString *)arg1;
- (void)removeProfileWithIdentifier:(NSString *)arg1 async:(bool)arg2;
- (void)requestEnrollmentFlowMonitorWithPersonaID:(NSString *)arg1;
- (void)stopEnrollmentFlowMonitor;
- (void)unblockAppInstallsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)validateESSOConfigurationProfile:(NSData *)arg1 error:(id*)arg2;

@end

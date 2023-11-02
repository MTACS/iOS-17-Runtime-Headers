
@interface EKConferenceUtils : NSObject

+ (id)FacetimeAppBundleID;
+ (id)FacetimeConferenceExtensionBundleID;
+ (id)_applicationRecordFromAppLink:(id)arg1 appLinkError:(id)arg2 orCustomScheme:(id)arg3;
+ (void)_findExtensionIdentifierForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_findRoomTypeForURL:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)_validURLForConferenceURL:(id)arg1 previousURLs:(id)arg2 completion:(id /* block */)arg3;
+ (id)_workQueue;
+ (void)applicationRecordForURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)applicationRecordForURL:(id)arg1 incomplete:(bool*)arg2;
+ (double)conferenceImageSize;
+ (void)invalidateConferenceURL:(id)arg1;
+ (void)invalidateConferenceURLIfNeeded:(id)arg1 inEventStore:(id)arg2;
+ (id)logHandle;
+ (id)parentAppBundleIdentifierForExtensionBundleIdentifier:(id)arg1;
+ (void)renewConferenceURL:(id)arg1 toDate:(id)arg2;
+ (id)synchronousAppTitleOnlyForURL:(id)arg1 incomplete:(bool*)arg2;
+ (id)validURLForConferenceURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)virtualConference:(id)arg1 likelyCameFromRoomTypes:(id)arg2 completionHandler:(id /* block */)arg3;

@end

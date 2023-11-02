
@interface IMAvailabilityInvitationManager : NSObject {
    DNDGlobalConfigurationService * _cachedDNDGlobalConfigurationService;
    NSCache * _dateAttemptedInvitationByHandleCache;
    NSObject<OS_dispatch_queue> * _dndBackgroundQueue;
    SKStatusPublishingService * _publishingService;
}

@property (nonatomic, retain) DNDGlobalConfigurationService *cachedDNDGlobalConfigurationService;
@property (nonatomic, retain) NSCache *dateAttemptedInvitationByHandleCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dndBackgroundQueue;
@property (nonatomic, retain) SKStatusPublishingService *publishingService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_dndHandleForHandleID:(id)arg1;
- (void)_invitablityForHandle:(id)arg1 fromHandle:(id)arg2 completion:(id /* block */)arg3;
- (id)_invitationCacheKeyForHandleID:(id)arg1 fromHandleID:(id)arg2;
- (void)_invitationPayloadForHandleID:(id)arg1 completion:(id /* block */)arg2;
- (void)_isFocusStatusSharedWithHandle:(id)arg1 fromHandle:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isHandleIDEligibleToReceiveAutomaticInvitation:(id)arg1;
- (id)_newDNDModeConfigurationService;
- (void)_republishCurrentAvailabilityStatus;
- (void)_sharePersonalAvailabilityWithSKHandle:(id)arg1 fromSKHandle:(id)arg2 allowingInvitationOfRemovedUsers:(bool)arg3 completion:(id /* block */)arg4;
- (id)_skHandleForString:(id)arg1;
- (void)attemptIfNeccessaryToAutomaticallyShareFocusStatusWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(id /* block */)arg3;
- (id)cachedDNDGlobalConfigurationService;
- (id)dateAttemptedInvitationByHandleCache;
- (id)dndBackgroundQueue;
- (id)dndGlobalConfigurationService;
- (void)fetchIsFocusConfigurationShareAcrossDevicesEnabledWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)isFocusStatusSharedWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(id /* block */)arg3;
- (void)manuallyRemoveSharingOfFocusStatusWithHandleID:(id)arg1 completion:(id /* block */)arg2;
- (void)manuallyShareFocusStatusWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(id /* block */)arg3;
- (id)publishingService;
- (void)repairSharedFocusStatusFollowingFailedValidationWithHandleID:(id)arg1 fromHandleID:(id)arg2 completion:(id /* block */)arg3;
- (void)setCachedDNDGlobalConfigurationService:(id)arg1;
- (void)setDateAttemptedInvitationByHandleCache:(id)arg1;
- (void)setDndBackgroundQueue:(id)arg1;
- (void)setPublishingService:(id)arg1;

@end

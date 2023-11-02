
@interface PKSharingIDSManager : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _completionHandlers;
    <PKSharingIDSManagerDataSource> * _dataSource;
    NSHashTable * _delegates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegatesLock;
    NSObject<OS_dispatch_queue> * _internalQueue;
    IDSService * _service;
    NSMutableDictionary * _sharingDestinations;
}

@property (nonatomic) <PKSharingIDSManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canPerformIDSMessageForSharingGroup:(unsigned long long)arg1 handleUserDetails:(id)arg2 currentUserDetails:(id)arg3 error:(id*)arg4;
- (void)_cloudStoreZoneShareInvitationRequestInvitationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_cloudStoreZoneShareInvitationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_cloudStoreZoneShareInvitationRequestRemoved:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_cloudStoreZoneShareInvitationResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_deviceSharingCapabilitiesRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_deviceSharingCapabiltiesRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)_handlerConfigurationForInvitation:(id)arg1 forHandle:(id)arg2;
- (id)_idsIDForHandle:(id)arg1;
- (id)_primaryAppleIDSharingDestination:(id)arg1;
- (void)_registerListeners;
- (void)_remoteRegistrationRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_remoteRegistrationRequestResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)_sanitizedHande:(id)arg1;
- (id)_sanitizedHandleWithFromID:(id)arg1;
- (void)_sendCloudStoreInvitationRequest:(id)arg1 handleUserDetails:(id)arg2 currentUserDetails:(id)arg3 type:(unsigned short)arg4 completion:(id /* block */)arg5;
- (void)_sendMessageWithProtobuf:(id)arg1 destination:(id)arg2 handleUserDetails:(id)arg3 currentUserDetails:(id)arg4 completion:(id /* block */)arg5;
- (void)_sharingDestinationForHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)addDelegate:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegates;
- (id)init;
- (id)initWithIDSService:(id)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (void)removeCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)removeDelegate:(id)arg1;
- (void)requestCloudStoreZoneInvitationData:(id)arg1 forHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)sendCloudStoreZoneInvitation:(id)arg1 forHandle:(id)arg2 invitationError:(id)arg3 completion:(id /* block */)arg4;
- (void)sendCloudStoreZoneInvitationResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDeviceSharingCapabilitiesRequestForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRemoteRegistrationRequest:(id)arg1 forHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)sendRemoteRegistrationRequestResult:(unsigned long long)arg1 forHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDataSource:(id)arg1;

@end

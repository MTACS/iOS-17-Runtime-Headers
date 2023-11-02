
@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long lastKnownParticipantSharingStatus;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchAllShareParticipantEmailAddressesForSharingType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (long long)lastKnownParticipantSharingStatus;
- (id)remoteInterface;
- (void)revokeAccessForAllShareParticipantsForSharingType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)tearDownHealthSharingForProfile:(id)arg1 completion:(id /* block */)arg2;

@end

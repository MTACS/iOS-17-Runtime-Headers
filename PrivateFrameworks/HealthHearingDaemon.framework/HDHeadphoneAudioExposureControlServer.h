
@interface HDHeadphoneAudioExposureControlServer : HDStandardTaskServer <HDDiagnosticObject, HKHeadphoneAudioExposureControlServer> {
    HDHealthStoreClient * _client;
    HDProfile * _profile;
    HDHearingProfileExtension * _profileExtension;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)_headphoneProvenanceForRemoteDevice:(bool)arg1;
- (id)_headphoneProvenanceForRemoteWatch;
- (id)_makeAirPods;
- (id)_makeBeatsHeadphones;
- (id)_makeEarPods;
- (id)_makeUnknownHeadphones;
- (void)connectionInvalidated;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_fetchDoseLimitWithCompletion:(id /* block */)arg1;
- (void)remote_fetchInfoWithCompletion:(id /* block */)arg1;
- (void)remote_insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(id)arg3 includesNotificationSample:(bool)arg4 synced:(bool)arg5 completion:(id /* block */)arg6;
- (void)remote_overrideDoseLimit:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_rebuildWithCompletion:(id /* block */)arg1;

@end


@interface AFAudioSessionAssertionRemoteAcquisitionService : NSObject <AFAudioSessionAssertionAcquisitionService> {
    AFInstanceContext * _instanceContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireAudioSessionAssertionWithContext:(id)arg1 relinquishmentHandler:(id /* block */)arg2;
- (id)initWithInstanceContext:(id)arg1;

@end

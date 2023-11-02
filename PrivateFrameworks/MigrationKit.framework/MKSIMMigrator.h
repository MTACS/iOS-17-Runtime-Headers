
@interface MKSIMMigrator : MKMigrator {
    CoreTelephonyClient * _client;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)coreTelephonyClientDidInvalidateCrossPlatformPlanTransfer:(id)arg1;
- (void)coreTelephonyClientDidPrepareCrossPlatformPlanTransfer:(id)arg1;
- (void)import:(id)arg1;
- (void)importDataEncodedInJSON:(id)arg1;
- (id)init;
- (void)remove;

@end

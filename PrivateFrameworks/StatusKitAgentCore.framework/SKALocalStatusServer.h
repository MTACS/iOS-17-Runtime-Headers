
@interface SKALocalStatusServer : SwiftNativeNSObject <IDSServiceDelegate> {
    void browseTask;
    void databaseDelegate;
    void databaseManager;
    void databaseProvider;
    void deliverySubjects;
    void failedDeliveries;
    void failedDeliveryRetryTask;
    void idsDeviceProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  idsDeviceProviderToken;
    void idsDeviceRecipientIDs;
    void listener;
    void observationTimestamps;
    void queue;
    void receiveStatusCompanionLink;
    void subscriptionSubjects;
}

- (id)init;
- (id)initWithIdsDeviceProvider:(id)arg1;
- (void)objcShutdown;
- (void)service:(id)arg1 devicesChanged:(id)arg2;

@end

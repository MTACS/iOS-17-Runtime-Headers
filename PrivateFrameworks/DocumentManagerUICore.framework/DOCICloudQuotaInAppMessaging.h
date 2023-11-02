
@interface DOCICloudQuotaInAppMessaging : NSObject {
    ICQInAppMessaging * _messaging;
}

@property (nonatomic, readonly) ICQInAppMessaging *messaging;

+ (id)currentInAppMessageChangedNotification;
+ (void)preloadICloudQuotaLibrary;
+ (id)shared;

- (void).cxx_destruct;
- (id)fetchMessageFromNotification:(id)arg1;
- (id)init;
- (id)messaging;
- (void)startObservingUpdates;
- (void)stopObservingUpdates;

@end

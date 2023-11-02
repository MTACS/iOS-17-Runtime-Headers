
@interface UNCNotificationServiceExtension : NSObject {
    NSExtension * _extension;
    double  _graceTime;
    NSExtensionContext * _hostContext;
    UNNotificationContent * _mutatedContent;
    double  _serviceTime;
}

@property (nonatomic, readonly) LSPlugInKitProxy *proxy;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double serviceTime;

+ (void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;
+ (void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;
+ (id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+ (id)_extensionIdentifiersToPerExtensionQueues;
+ (bool)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3;
- (void)cleanUp;
- (id)mutateContentForNotificationRequest:(id)arg1 error:(id*)arg2;
- (id)proxy;
- (id)queue;
- (double)serviceTime;

@end

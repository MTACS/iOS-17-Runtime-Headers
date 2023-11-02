
@interface HomeKitEvents.Configuration : NSObject

+ (id)containerID;
+ (void)resetWithCompletion:(id /* block */)arg1;
+ (id)zoneNameForZoneUUID:(id)arg1;
+ (id)zoneUUIDForHomeIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)init;

@end

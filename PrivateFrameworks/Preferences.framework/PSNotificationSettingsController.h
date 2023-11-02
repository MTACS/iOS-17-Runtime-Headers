
@interface PSNotificationSettingsController : NSObject {
    BBSettingsGateway * _gateway;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _sectionInfosByIdentifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allSectionInfoIdentifiers;
- (void)dealloc;
- (id)init;
- (id)sectionInfoForIdentifier:(id)arg1;

@end

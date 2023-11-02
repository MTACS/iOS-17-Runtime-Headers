
@interface HUCameraUsageOptionItemProvider : HFItemProvider {
    NSSet * _cameraProfiles;
    unsigned long long  _displayStyle;
    NSMutableSet * _items;
    unsigned long long  _presenceEventType;
}

@property (nonatomic, readonly, copy) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, readonly) unsigned long long presenceEventType;

- (void).cxx_destruct;
- (id)cameraProfiles;
- (unsigned long long)displayStyle;
- (id)init;
- (id)initWithPresenceEventType:(unsigned long long)arg1 cameraProfiles:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (unsigned long long)presenceEventType;
- (id)reloadItems;

@end


@interface ATXNotificationResolutionDictionarySource : NSObject <ATXNotificationResolutionSourceProtocol> {
    NSDictionary * _resolutionDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResolutionDictionary:(id)arg1;
- (id)resolutionsForNotifications:(id)arg1;

@end

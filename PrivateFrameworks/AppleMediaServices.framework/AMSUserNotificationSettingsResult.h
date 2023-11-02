
@interface AMSUserNotificationSettingsResult : NSObject {
    NSDictionary * _itemsMap;
    NSString * _serviceIdentifier;
}

@property (nonatomic, readonly) NSDictionary *itemsMap;
@property (nonatomic, readonly) NSString *serviceIdentifier;

+ (id)_itemsMapForServiceIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;

- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)itemsMap;
- (id)serviceIdentifier;

@end


@protocol PLIndexMappingCache <NSObject>

@required

- (<NSObject><NSCopying> *)cachedIndexMapState;
- (Class)derivedChangeNotificationClass;
- (bool)mappedDataSourceChanged:(PLContainerChangeNotification *)arg1 remoteNotificationData:(NSDictionary *)arg2;

@optional

- (id)currentStateForChange;

@end

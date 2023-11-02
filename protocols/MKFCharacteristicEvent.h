
@protocol MKFCharacteristicEvent <MKFEvent, MKFCharacteristicEventPublicExtensions>

@required

- (NSNumber *)characteristicID;
- (MKFCharacteristicEventDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFService> *)service;
- (void)setCharacteristicID:(NSNumber *)arg1;
- (void)setService:(id <MKFService>)arg1;

@end

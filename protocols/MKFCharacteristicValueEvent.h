
@protocol MKFCharacteristicValueEvent <MKFCharacteristicEvent, MKFCharacteristicValueEventPublicExtensions>

@required

- (MKFCharacteristicValueEventDatabaseID *)databaseID;
- (NSObject *)eventValue;
- (<MKFHome> *)home;
- (void)setEventValue:(NSObject *)arg1;

@end

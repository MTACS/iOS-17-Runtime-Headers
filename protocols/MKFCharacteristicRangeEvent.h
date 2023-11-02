
@protocol MKFCharacteristicRangeEvent <MKFCharacteristicEvent, MKFCharacteristicRangeEventPublicExtensions>

@required

- (MKFCharacteristicRangeEventDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSObject *)max;
- (NSObject *)min;
- (void)setMax:(NSObject *)arg1;
- (void)setMin:(NSObject *)arg1;

@end

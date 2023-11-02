
@interface DBHomeKitDoorStateCharacteristic : DBHomeKitCharacteristic

@property (nonatomic) long long doorStateValue;

+ (id)characteristicFormat;
+ (id)characteristicFormats;
+ (void)load;
+ (id)stringForDoorState:(long long)arg1;

- (long long)doorStateValue;
- (id)formatedValue;
- (void)setDoorStateValue:(long long)arg1;

@end

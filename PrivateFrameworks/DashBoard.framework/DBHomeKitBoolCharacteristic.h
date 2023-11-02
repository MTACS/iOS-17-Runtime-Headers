
@interface DBHomeKitBoolCharacteristic : DBHomeKitCharacteristic

@property (nonatomic) bool boolValue;

+ (id)characteristicFormat;
+ (void)load;

- (bool)boolValue;
- (id)formatedValue;
- (void)setBoolValue:(bool)arg1;

@end

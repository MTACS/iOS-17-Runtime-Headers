
@protocol FCKeyValueStoreCoding <FCKeyValueStoreValue>

@required

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(NTPBKeyValuePair *)arg1;

- (void)writeToKeyValuePair:(NTPBKeyValuePair *)arg1;

@optional

- (void)writeValueToDataWriter:(PBDataWriter *)arg1;

@end

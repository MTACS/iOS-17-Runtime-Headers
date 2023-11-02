
@protocol _SFPBInfoTuple <NSObject>

@required

- (void)addValues:(_SFPBCommandButtonItem *)arg1;
- (void)clearValues;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (unsigned int)initiallyVisibleValues;
- (NSData *)jsonData;
- (NSString *)key;
- (void)setInitiallyVisibleValues:(unsigned int)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setShowMoreString:(NSString *)arg1;
- (void)setValues:(NSArray *)arg1;
- (NSString *)showMoreString;
- (NSArray *)values;
- (_SFPBCommandButtonItem *)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;

@end

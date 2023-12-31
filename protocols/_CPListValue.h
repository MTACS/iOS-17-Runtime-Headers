
@protocol _CPListValue <NSObject>

@required

- (void)addValues:(_CPValue *)arg1;
- (void)clearValues;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setValues:(NSArray *)arg1;
- (NSArray *)values;
- (_CPValue *)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;

@end

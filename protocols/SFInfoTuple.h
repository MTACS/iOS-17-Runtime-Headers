
@protocol SFInfoTuple <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (unsigned long long)initiallyVisibleValues;
- (NSData *)jsonData;
- (NSString *)key;
- (void)setInitiallyVisibleValues:(unsigned long long)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setShowMoreString:(NSString *)arg1;
- (void)setValues:(NSArray *)arg1;
- (NSString *)showMoreString;
- (NSArray *)values;

@end

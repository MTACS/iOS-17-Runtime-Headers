
@protocol _INPBDictionary <NSObject>

@required

+ (Class)pairType;

- (void)addPair:(_INPBPair *)arg1;
- (void)clearPairs;
- (_INPBPair *)pairAtIndex:(unsigned long long)arg1;
- (NSArray *)pairs;
- (unsigned long long)pairsCount;
- (void)setPairs:(NSArray *)arg1;

@end

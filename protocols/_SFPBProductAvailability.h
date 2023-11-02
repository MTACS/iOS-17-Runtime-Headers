
@protocol _SFPBProductAvailability <NSObject>

@required

- (void)addResults:(_SFPBProductInventoryResult *)arg1;
- (void)clearResults;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)results;
- (_SFPBProductInventoryResult *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setResults:(NSArray *)arg1;

@end

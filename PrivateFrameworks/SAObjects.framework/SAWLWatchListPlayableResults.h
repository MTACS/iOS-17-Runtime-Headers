
@interface SAWLWatchListPlayableResults : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *playables;
@property (readonly) Class superclass;

+ (id)watchListPlayableResults;
+ (id)watchListPlayableResultsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playables;
- (void)setPlayables:(id)arg1;

@end

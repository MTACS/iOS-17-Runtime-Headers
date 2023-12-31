
@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *statsId;

+ (id)getWatchListPlayables;
+ (id)getWatchListPlayablesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStatsId:(id)arg1;
- (id)statsId;

@end

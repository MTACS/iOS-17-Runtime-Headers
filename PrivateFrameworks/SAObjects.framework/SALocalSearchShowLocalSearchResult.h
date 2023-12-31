
@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (nonatomic, copy) NSString *extSessionGuid;
@property (nonatomic, copy) NSDate *extSessionGuidCreatedTimestamp;
@property (nonatomic, copy) NSData *rawData;

+ (id)showLocalSearchResult;
+ (id)showLocalSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (id)rawData;
- (bool)requiresResponse;
- (void)setExtSessionGuid:(id)arg1;
- (void)setExtSessionGuidCreatedTimestamp:(id)arg1;
- (void)setRawData:(id)arg1;

@end

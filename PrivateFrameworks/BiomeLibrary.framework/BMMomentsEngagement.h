
@interface BMMomentsEngagement : BMEventBase <BMStoreData> {
    BMMomentsEngagementClientActivityEvent * _clientActivityEvent;
    BMMomentsEngagementAppEntryEvent * _entryEvent;
    BMMomentsEngagementSuggestionEvent * _suggestionEvent;
}

@property (nonatomic, readonly) BMMomentsEngagementClientActivityEvent *clientActivityEvent;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMMomentsEngagementAppEntryEvent *entryEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMMomentsEngagementSuggestionEvent *suggestionEvent;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)clientActivityEvent;
- (unsigned int)dataVersion;
- (id)description;
- (id)entryEvent;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSuggestionEvent:(id)arg1 entryEvent:(id)arg2 clientActivityEvent:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)suggestionEvent;
- (void)writeTo:(id)arg1;

@end

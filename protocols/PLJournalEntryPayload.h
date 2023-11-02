
@protocol PLJournalEntryPayload <NSObject>

@required

+ (NSString *)payloadClassID;
+ (unsigned int)payloadVersion;
+ (<PLJournalEntryPayload> *)payloadWithData:(NSData *)arg1 forPayloadID:(id <PLJournalEntryPayloadID>)arg2 version:(unsigned int)arg3 andNilProperties:(NSSet *)arg4 error:(id*)arg5;

- (bool)containsAttributeForKey:(NSString *)arg1;
- (NSString *)descriptionForEntry:(PLJournalEntry *)arg1;
- (void)mergePayload:(id <PLJournalEntryPayload>)arg1;
- (void)migrateMergedPayloadWithUpdatePayloads:(NSArray *)arg1;
- (NSSet *)nilProperties;
- (NSDictionary *)payloadAttributes;
- (NSData *)payloadDataWithError:(id*)arg1;
- (<PLJournalEntryPayloadID> *)payloadID;
- (unsigned int)payloadVersion;
- (NSString *)prettyDescriptionForEntry:(PLJournalEntry *)arg1 indent:(long long)arg2;

@end

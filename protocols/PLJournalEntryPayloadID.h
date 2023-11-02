
@protocol PLJournalEntryPayloadID <NSObject, NSCopying>

@required

- (NSString *)payloadIDString;
- (NSData *)payloadUUIDData;

@end


@interface MFMailboxUidTransformer : NSObject

+ (bool)isMailbox:(id)arg1 equalTo:(id)arg2 uidToMailboxMap:(id)arg3;

- (id)init;
- (id)transformMailboxUid:(id)arg1 uidToMailboxMap:(id)arg2 objectIDToUidMap:(id)arg3;

@end

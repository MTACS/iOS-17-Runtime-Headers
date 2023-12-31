
@protocol MFBaseMessage <NSObject>

@required

- (long long)conversationHash;
- (MFMessageInfo *)copyMessageInfo;
- (unsigned int)dateReceivedInterval;
- (unsigned int)dateSentInterval;
- (bool)deleted;
- (bool)flagged;
- (bool)isKnownToHaveAttachments;
- (bool)isLibraryMessage;
- (unsigned int)libraryID;
- (unsigned int)mailboxID;
- (long long)messageIDHash;
- (bool)read;
- (bool)senderVIP;
- (unsigned int)uid;

@end

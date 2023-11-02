
@interface MFMessagesMissingBodyData : NSObject {
    NSIndexSet * _fragmentedMessages;
    NSArray * _messagesMissingBodyData;
    NSIndexSet * _messagesNotMissingBodyData;
    long long  _messagesScannedInFilesystemCount;
}

@property (nonatomic, readonly, copy) NSIndexSet *fragmentedMessages;
@property (nonatomic, readonly, copy) NSArray *messagesMissingBodyData;
@property (nonatomic, readonly, copy) NSIndexSet *messagesNotMissingBodyData;
@property (nonatomic, readonly) long long messagesScannedInFilesystemCount;

- (void).cxx_destruct;
- (id)fragmentedMessages;
- (id)messagesMissingBodyData;
- (id)messagesNotMissingBodyData;
- (long long)messagesScannedInFilesystemCount;

@end

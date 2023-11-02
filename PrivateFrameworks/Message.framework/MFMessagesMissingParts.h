
@interface MFMessagesMissingParts : NSObject {
    NSArray * _fragmentedMessages;
    long long  _messagesScannedInFilesystemCount;
    NSIndexSet * _nonFragmentedMessages;
}

@property (nonatomic, readonly, copy) NSArray *fragmentedMessages;
@property (nonatomic, readonly) long long messagesScannedInFilesystemCount;
@property (nonatomic, readonly, copy) NSIndexSet *nonFragmentedMessages;

- (void).cxx_destruct;
- (id)fragmentedMessages;
- (long long)messagesScannedInFilesystemCount;
- (id)nonFragmentedMessages;

@end

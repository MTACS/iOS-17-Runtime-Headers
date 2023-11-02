
@protocol CKTranscriptCollectionViewCellProtocol <NSObject>

@required

+ (NSString *)reuseIdentifier;

- (void)configureForChatItem:(CKChatItem *)arg1 context:(NSString *)arg2;

@end

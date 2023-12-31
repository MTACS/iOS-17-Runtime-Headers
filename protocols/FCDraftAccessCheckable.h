
@protocol FCDraftAccessCheckable <NFCopying>

@required

- (NSString *)identifier;
- (bool)isDraft;
- (bool)isLocalDraft;
- (<FCChannelProviding> *)sourceChannel;

@end

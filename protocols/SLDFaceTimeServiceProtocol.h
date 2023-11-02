
@protocol SLDFaceTimeServiceProtocol <NSObject>

@required

- (void)initiateTUConversationForAttributionIdentifier:(void *)arg1 videoEnabled:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)refreshShareableContentMetadataInJoinedConversation;

@end

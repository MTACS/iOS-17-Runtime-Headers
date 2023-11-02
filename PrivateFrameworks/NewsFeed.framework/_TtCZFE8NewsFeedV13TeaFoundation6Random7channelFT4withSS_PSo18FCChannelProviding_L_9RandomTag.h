
@interface _TtCZFE8NewsFeedV13TeaFoundation6Random7channelFT4withSS_PSo18FCChannelProviding_L_9RandomTag : FCTag

@property (nonatomic, readonly) NSArray *currentIssueIDs;

- (id)currentIssueIDs;
- (id)init;
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5;
- (id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3;
- (id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3 nameImageMaskAssetHandle:(id)arg4;
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 umcCanonicalID:(id)arg4;
- (id)initWithData:(id)arg1 context:(id)arg2;
- (id)initWithTagMetadata:(id)arg1 assetManager:(id)arg2 isSports:(bool)arg3;
- (id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3;
- (id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3;

@end

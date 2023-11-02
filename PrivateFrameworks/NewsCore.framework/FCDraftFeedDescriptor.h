
@interface FCDraftFeedDescriptor : FCFeedDescriptor {
    NSString * _articleListID;
    <FCChannelProviding> * _channel;
    NSString * _issueListID;
}

@property (nonatomic, readonly) NSString *articleListID;
@property (nonatomic, readonly) <FCChannelProviding> *channel;
@property (nonatomic, readonly) NSString *issueListID;

- (void).cxx_destruct;
- (id)articleListID;
- (id)backingChannel;
- (id)backingTag;
- (id)channel;
- (long long)feedType;
- (id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3;
- (id)issueListID;
- (id)name;

@end

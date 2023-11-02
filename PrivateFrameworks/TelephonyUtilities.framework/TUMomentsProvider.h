
@interface TUMomentsProvider : NSObject {
    NSDictionary * _remoteIDSDestinations;
    bool  _remoteMomentsAvailable;
    NSString * _requesterID;
    long long  _streamToken;
}

@property (nonatomic, readonly, copy) NSDictionary *remoteIDSDestinations;
@property (getter=isRemoteMomentsAvailable, nonatomic, readonly) bool remoteMomentsAvailable;
@property (nonatomic, readonly, copy) NSString *requesterID;
@property (nonatomic, readonly) long long streamToken;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCall:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (bool)isEqualToProvider:(id)arg1;
- (bool)isRemoteMomentsAvailable;
- (id)remoteIDSDestinations;
- (id)requesterID;
- (long long)streamToken;

@end


@interface AFRemoteRequest : NSObject {
    AFRequestInfo * _info;
    NSString * _peerIdentifier;
}

@property (nonatomic, readonly) AFRequestInfo *info;
@property (nonatomic, copy) NSString *peerIdentifier;

- (void).cxx_destruct;
- (id)info;
- (id)initWithInfo:(id)arg1;
- (id)peerIdentifier;
- (void)sendWithCompletion:(id /* block */)arg1;
- (void)setPeerIdentifier:(id)arg1;

@end

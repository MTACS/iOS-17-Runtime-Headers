
@interface NUErrorMessageFactory : NSObject <NUErrorMessageFactory> {
    FCNetworkReachability * _networkReachability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCNetworkReachability *networkReachability;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)errorMessageForArticleView;
- (id)errorMessageForArticleViewWithOfflineReason:(long long)arg1;
- (id)errorMessageForTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithNetworkReachability:(id)arg1;
- (id)networkReachability;

@end


@interface _UIWebGeolocationChallengeData : NSObject {
    <WebAllowDenyPolicyListener> * _listener;
    NSURL * _requestingURL;
    NSString * _token;
    NSString * _userVisibleDomain;
    UIView * _view;
}

@property (nonatomic, retain) <WebAllowDenyPolicyListener> *listener;
@property (nonatomic, retain) NSURL *requestingURL;
@property (nonatomic, retain) NSString *token;
@property (nonatomic, retain) NSString *userVisibleDomain;
@property (nonatomic, retain) UIView *view;

- (void)dealloc;
- (id)listener;
- (id)requestingURL;
- (void)setListener:(id)arg1;
- (void)setRequestingURL:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUserVisibleDomain:(id)arg1;
- (void)setView:(id)arg1;
- (id)token;
- (id)userVisibleDomain;
- (id)view;

@end

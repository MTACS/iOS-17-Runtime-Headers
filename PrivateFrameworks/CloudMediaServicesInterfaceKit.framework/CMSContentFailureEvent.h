
@interface CMSContentFailureEvent : CMSBaseContentFailureEvent {
    bool  _didReachMaxRetries;
    bool  _doesServiceSupportPlaybackFailureRecovery;
    long long  _errorCode;
}

@property (nonatomic) bool didReachMaxRetries;
@property (nonatomic) bool doesServiceSupportPlaybackFailureRecovery;
@property (nonatomic) long long errorCode;

- (bool)didReachMaxRetries;
- (bool)doesServiceSupportPlaybackFailureRecovery;
- (id)encoded;
- (long long)errorCode;
- (id)initWithServiceID:(id)arg1 sessionIdentifier:(id)arg2 errorCode:(long long)arg3;
- (id)initWithServiceID:(id)arg1 sessionIdentifier:(id)arg2 errorCode:(long long)arg3 doesServiceSupportPlaybackFailureRecovery:(bool)arg4;
- (void)setDidReachMaxRetries:(bool)arg1;
- (void)setDoesServiceSupportPlaybackFailureRecovery:(bool)arg1;
- (void)setErrorCode:(long long)arg1;

@end

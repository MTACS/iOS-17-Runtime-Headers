
@interface ICMusicSubscriptionRequest : ICRequestOperation {
    long long  _requestType;
    bool  _requestingOfflineSlot;
    ICStoreRequestContext * _storeRequestContext;
}

- (void).cxx_destruct;
- (id)_bagKeyForRequestType:(long long)arg1;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1 requestType:(long long)arg2 requestingOfflineSlot:(bool)arg3;

@end


@interface SLFetchShareableContentAction : SLShareableContentAction {
    long long  _requestedItemProviderIndex;
    NSString * _requestedTypeIdentifier;
}

@property (nonatomic, readonly) long long requestedItemProviderIndex;
@property (nonatomic, readonly, copy) NSString *requestedTypeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 requestedTypeIdentifier:(id)arg2 requestedItemProviderIndex:(long long)arg3 responseHandler:(id /* block */)arg4;
- (long long)requestedItemProviderIndex;
- (id)requestedTypeIdentifier;

@end

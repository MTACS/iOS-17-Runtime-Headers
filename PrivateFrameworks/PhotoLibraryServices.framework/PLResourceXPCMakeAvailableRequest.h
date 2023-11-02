
@interface PLResourceXPCMakeAvailableRequest : PLResourceXPCRequest {
    long long  _downloadIntent;
    long long  _downloadPriority;
    bool  _networkAccessAllowed;
    <PLResourceIdentity> * _resourceIdentity;
    bool  _transient;
}

@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, readonly) <PLResourceIdentity> *resourceIdentity;
@property (getter=isTransient, nonatomic) bool transient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resource:(id)arg3;
- (bool)isNetworkAccessAllowed;
- (bool)isTransient;
- (id)resourceIdentity;
- (void)setDownloadIntent:(long long)arg1;
- (void)setDownloadPriority:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setTransient:(bool)arg1;

@end

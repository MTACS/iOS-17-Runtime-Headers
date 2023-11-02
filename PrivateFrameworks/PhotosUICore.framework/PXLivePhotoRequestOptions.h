
@interface PXLivePhotoRequestOptions : NSObject <NSCopying> {
    long long  _deliveryMode;
    long long  _downloadIntent;
    long long  _downloadPriority;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    long long  _version;
}

@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (bool)isNetworkAccessAllowed;
- (id)photoKitRequestOptions;
- (id /* block */)progressHandler;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setDownloadPriority:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end

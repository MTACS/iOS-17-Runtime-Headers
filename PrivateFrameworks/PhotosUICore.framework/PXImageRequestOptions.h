
@interface PXImageRequestOptions : NSObject <NSCopying, PXImageRequestOptionsProperties> {
    bool  _allowPlaceholder;
    bool  _allowSecondaryDegradedImage;
    long long  _deliveryMode;
    long long  _downloadIntent;
    long long  _loadingMode;
    bool  _networkAccessAllowed;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedCropRect;
    bool  _preferHDR;
    id /* block */  _progressHandler;
    long long  _resizeMode;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
    bool  _synchronous;
    bool  _useLowMemoryMode;
    long long  _version;
}

@property (nonatomic) bool allowPlaceholder;
@property (nonatomic) bool allowSecondaryDegradedImage;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long loadingMode;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic) bool preferHDR;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) long long resizeMode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic) bool useLowMemoryMode;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (bool)allowPlaceholder;
- (bool)allowSecondaryDegradedImage;
- (void)copyPropertiesToOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (long long)downloadIntent;
- (id)init;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (long long)loadingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (id)photoKitRequestOptions;
- (bool)preferHDR;
- (id /* block */)progressHandler;
- (long long)resizeMode;
- (id)resultHandlerQueue;
- (void)setAllowPlaceholder:(bool)arg1;
- (void)setAllowSecondaryDegradedImage:(bool)arg1;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setLoadingMode:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferHDR:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setResizeMode:(long long)arg1;
- (void)setResultHandlerQueue:(id)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setUseLowMemoryMode:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (bool)useLowMemoryMode;
- (long long)version;

@end

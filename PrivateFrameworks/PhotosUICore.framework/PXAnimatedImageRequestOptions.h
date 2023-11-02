
@interface PXAnimatedImageRequestOptions : PXImageRequestOptions <PXImageRequestOptionsProperties> {
    bool  _allowPreCaching;
    bool  _useSharedImageDecoding;
}

@property (nonatomic) bool allowPlaceholder;
@property (nonatomic) bool allowPreCaching;
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
@property (nonatomic) bool useSharedImageDecoding;
@property (nonatomic) long long version;

- (bool)allowPreCaching;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)photoKitRequestOptions;
- (void)setAllowPreCaching:(bool)arg1;
- (void)setUseSharedImageDecoding:(bool)arg1;
- (bool)useSharedImageDecoding;

@end

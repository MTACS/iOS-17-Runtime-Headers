
@interface PHCompositeMediaResult : NSObject {
    bool  _cancelled;
    NSDictionary * _imageProperties;
    bool  _isInCloud;
    NSMutableDictionary * _mutableInfo;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic, readonly) bool isDerivedFromDeferredPreview;
@property (nonatomic) bool isInCloud;
@property (nonatomic, readonly) bool isPlaceholder;

+ (id)resultWithRequestID:(int)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)_sanitizedError;
- (void)addInfoFromDictionary:(id)arg1;
- (id)adjustmentData;
- (id)allowedInfoKeys;
- (id)baseVersionNeeded;
- (bool)canHandleAdjustmentData;
- (id)cancelledInfoKey;
- (unsigned int)cgOrientation;
- (void)clearError;
- (bool)containsValidData;
- (id)error;
- (id)errorInfoKey;
- (id)exifOrientation;
- (id)fingerPrint;
- (id)imageData;
- (id)imageProperties;
- (id)imagePropertiesLoadIfNeeded:(bool)arg1;
- (struct CGImage { }*)imageRef;
- (id)imageSandboxExtensionToken;
- (id)imageURL;
- (id)inCloudInfoKey;
- (id)info;
- (id)initWithRequestID:(int)arg1;
- (bool)isCancelled;
- (bool)isDegraded;
- (bool)isDerivedFromDeferredPreview;
- (bool)isInCloud;
- (bool)isPlaceholder;
- (id)mediaMetadata;
- (id)sandboxExtensionToken;
- (id)sanitizedInfoDictionary;
- (void)setCancelled:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setErrorIfNone:(id)arg1;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (void)setIsInCloud:(bool)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (long long)uiOrientation;
- (id)uniformTypeIdentifier;
- (id)videoAdjustmentData;
- (id)videoMediaItemMakerData;
- (id)videoSandboxExtensionToken;
- (id)videoURL;

@end

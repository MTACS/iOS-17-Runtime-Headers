
@interface VCPMADServiceImageAsset : NSObject {
    NSNumber * _animatedStickerScore;
    unsigned long long  _assetType;
    NSArray * _barcodeObservations;
    NSData * _cachedParseData;
    NSString * _clientBundleID;
    NSString * _clientTeamID;
    NSArray * _documentObservations;
    bool  _hasCachedParseData;
    bool  _isHighResDecoded;
    unsigned int  _orientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
    NSString * _signpostPayload;
    bool  _userSafetyEligible;
}

@property (nonatomic, readonly) NSNumber *animatedStickerScore;
@property (nonatomic, readonly) unsigned long long assetType;
@property (nonatomic, copy) NSArray *barcodeObservations;
@property (nonatomic, copy) NSData *cachedParseData;
@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) NSString *clientTeamID;
@property (nonatomic, copy) NSArray *documentObservations;
@property (nonatomic, readonly) NSArray *faces;
@property (nonatomic, readonly) bool hasCachedParseData;
@property (nonatomic, readonly) bool hasValidSceneProcessing;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isHighResDecoded;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly) NSNumber *isSensitive;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSArray *nsfwClassifications;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } resolution;
@property (nonatomic, readonly) NSArray *scenenetClassifications;
@property (nonatomic, retain) NSString *signpostPayload;
@property (nonatomic) bool userSafetyEligible;

+ (id)assetWithImageData:(id)arg1 uniformTypeIdentifier:(id)arg2 identifier:(id)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;
+ (id)assetWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;
+ (id)assetWithPhotosAsset:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(unsigned int)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;
+ (id)assetWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 identifier:(id)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;
+ (id)assetWithURL:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4;

- (void).cxx_destruct;
- (id)animatedStickerScore;
- (unsigned long long)assetType;
- (id)barcodeObservations;
- (id)cachedParseData;
- (id)clientBundleID;
- (id)clientTeamID;
- (id)documentObservations;
- (id)faces;
- (bool)hasCachedParseData;
- (bool)hasValidSceneProcessing;
- (id)identifier;
- (id)initWithClientBundleID:(id)arg1 clientTeamID:(id)arg2;
- (bool)isHighResDecoded;
- (bool)isScreenshot;
- (id)isSensitive;
- (int)loadHighResPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (int)loadLowResPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (int)loadPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (id)location;
- (id)nsfwClassifications;
- (unsigned int)orientation;
- (struct CGSize { double x1; double x2; })resolution;
- (id)scenenetClassifications;
- (void)setBarcodeObservations:(id)arg1;
- (void)setCachedParseData:(id)arg1;
- (void)setCachedParseData:(id)arg1 overwriteExisting:(bool)arg2;
- (void)setDocumentObservations:(id)arg1;
- (void)setSignpostPayload:(id)arg1;
- (void)setUserSafetyEligible:(bool)arg1;
- (id)signpostPayload;
- (bool)userSafetyEligible;
- (id)vcp_annotationWithTypes:(unsigned long long)arg1;
- (id)vcp_scenenetAnnotation;
- (id)vcp_textAnnotation;

@end

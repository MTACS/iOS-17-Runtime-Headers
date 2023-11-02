
@interface BlastDoorAttributionInfo : NSObject {
    void attributionInfo;
}

@property (nonatomic, readonly) NSString *accessibilityStickerName;
@property (nonatomic, readonly) unsigned long long adamID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_adamID;
@property (nonatomic, readonly) bool has_previewGenerationSizeHeight;
@property (nonatomic, readonly) bool has_previewGenerationSizeWidth;
@property (nonatomic, readonly) NSString *packName;
@property (nonatomic, readonly) BlastDoorAttributionInfo_PreviewGenerationConstraints *previewGenerationConstraints;
@property (nonatomic, readonly) double previewGenerationSizeHeight;
@property (nonatomic, readonly) double previewGenerationSizeWidth;

- (void).cxx_destruct;
- (id)accessibilityStickerName;
- (unsigned long long)adamID;
- (id)bundleID;
- (id)description;
- (bool)has_adamID;
- (bool)has_previewGenerationSizeHeight;
- (bool)has_previewGenerationSizeWidth;
- (id)init;
- (id)packName;
- (id)previewGenerationConstraints;
- (double)previewGenerationSizeHeight;
- (double)previewGenerationSizeWidth;

@end

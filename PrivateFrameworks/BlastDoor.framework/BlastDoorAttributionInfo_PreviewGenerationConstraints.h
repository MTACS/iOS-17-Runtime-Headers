
@interface BlastDoorAttributionInfo_PreviewGenerationConstraints : NSObject {
    void attributionInfo_PreviewGenerationConstraints;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_maxPixelWidth;
@property (nonatomic, readonly) bool has_minThumbSizeHeight;
@property (nonatomic, readonly) bool has_minThumbSizeWidth;
@property (nonatomic, readonly) bool has_scale;
@property (nonatomic, readonly) bool isSticker;
@property (nonatomic, readonly) double maxPixelWidth;
@property (nonatomic, readonly) double minThumbSizeHeight;
@property (nonatomic, readonly) double minThumbSizeWidth;
@property (nonatomic, readonly) double scale;

- (id)description;
- (bool)has_maxPixelWidth;
- (bool)has_minThumbSizeHeight;
- (bool)has_minThumbSizeWidth;
- (bool)has_scale;
- (id)init;
- (bool)isSticker;
- (double)maxPixelWidth;
- (double)minThumbSizeHeight;
- (double)minThumbSizeWidth;
- (double)scale;

@end

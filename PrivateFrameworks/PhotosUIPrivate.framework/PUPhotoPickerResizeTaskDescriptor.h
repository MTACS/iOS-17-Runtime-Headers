
@interface PUPhotoPickerResizeTaskDescriptor : NSObject <NSCopying> {
    NSCountedSet * _cachedAssetsIdentifiersForEstimation;
    unsigned long long  _cachedSizeEstimate;
    NSString * _localizedDescription;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

+ (id)defaultActualSizeDescriptor;
+ (id)defaultLargeDescriptor;
+ (id)defaultMediumDescriptor;
+ (id)defaultSmallDescriptor;
+ (id)orderedDefaultDescriptors;

- (void).cxx_destruct;
- (bool)appliesToAsset:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)estimatedSizeForAssets:(id)arg1;
- (id)formattedSizeForAssets:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLocalizedDescription:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedDescriptionForAssets:(id)arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end

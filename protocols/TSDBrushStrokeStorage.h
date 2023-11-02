
@protocol TSDBrushStrokeStorage <NSObject>

@required

- (NSDictionary *)bounds;
- (NSObject<TSDBrushStrokeStorage> *)deepCopy;
- (TSUImage *)image;
- (NSDictionary *)lineEnds;
- (NSDictionary *)options;
- (NSDictionary *)paths;
- (NSDictionary *)textureIndices;
- (unsigned long long)totalSectionCount;

@end

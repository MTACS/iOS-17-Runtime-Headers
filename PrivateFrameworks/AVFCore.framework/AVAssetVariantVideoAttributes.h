
@interface AVAssetVariantVideoAttributes : NSObject {
    NSArray * _allImmersiveAttributes;
    NSArray * _allVideoLayoutAttributes;
    FigAlternateObjC * _figAlternateObjC;
    struct OpaqueFigSimpleMutex { } * _mutex;
}

@property (nonatomic, readonly) NSArray *codecTypes;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic, readonly) NSArray *videoLayoutAttributes;
@property (nonatomic, readonly) NSString *videoRange;

- (id)codecTypes;
- (void)dealloc;
- (id)description;
- (id)immersiveAttributes;
- (id)initWithFigAlternateObjC:(id)arg1;
- (double)nominalFrameRate;
- (struct CGSize { double x1; double x2; })presentationSize;
- (id)videoLayoutAttributes;
- (id)videoRange;

@end

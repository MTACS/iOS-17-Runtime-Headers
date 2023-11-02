
@interface AVAssetVariantVideoLayoutAttributes : NSObject {
    FigAlternateObjCVideoLayoutAttributes * _figVideoLayoutAttributes;
}

@property (nonatomic, readonly) unsigned long long packingType;
@property (nonatomic, readonly) unsigned long long projectionType;
@property (nonatomic, readonly) unsigned long long stereoViewComponents;

- (void)dealloc;
- (id)description;
- (id)initWithFigVideoImmersiveAttributes:(id)arg1;
- (unsigned long long)packingType;
- (unsigned long long)projectionType;
- (unsigned long long)stereoViewComponents;

@end

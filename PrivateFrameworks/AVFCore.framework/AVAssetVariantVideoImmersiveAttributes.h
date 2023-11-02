
@interface AVAssetVariantVideoImmersiveAttributes : NSObject {
    FigAlternateObjCVideoImmersiveAttributes * _figVideoImmersiveAttributes;
}

@property (nonatomic, readonly) long long channelLayout;
@property (nonatomic, readonly) long long packing;
@property (nonatomic, readonly) long long projection;

- (long long)channelLayout;
- (void)dealloc;
- (id)description;
- (id)initWithFigVideoImmersiveAttributes:(id)arg1;
- (long long)packing;
- (long long)projection;

@end

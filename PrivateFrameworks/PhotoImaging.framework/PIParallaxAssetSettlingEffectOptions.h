
@interface PIParallaxAssetSettlingEffectOptions : NSObject {
    bool  _isInteractiveRequest;
    bool  _loadVideoStatusOnly;
    bool  _needsInProcessHandling;
}

@property (nonatomic) bool isInteractiveRequest;
@property (nonatomic) bool loadVideoStatusOnly;
@property (nonatomic) bool needsInProcessHandling;

- (bool)isInteractiveRequest;
- (bool)loadVideoStatusOnly;
- (bool)needsInProcessHandling;
- (void)setIsInteractiveRequest:(bool)arg1;
- (void)setLoadVideoStatusOnly:(bool)arg1;
- (void)setNeedsInProcessHandling:(bool)arg1;

@end

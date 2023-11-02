
@interface PXTilingControllerCompositionInvalidationContext : NSObject {
    <NSObject> * _animationOptions;
    PXTilingController * _originatingTilingController;
}

@property (nonatomic, retain) <NSObject> *animationOptions;
@property (nonatomic, retain) PXTilingController *originatingTilingController;

+ (id)defaultAnimationOptionsForTilingController:(id)arg1 withInvalidationContexts:(id)arg2;

- (void).cxx_destruct;
- (id)animationOptions;
- (id)description;
- (id)originatingTilingController;
- (void)setAnimationOptions:(id)arg1;
- (void)setOriginatingTilingController:(id)arg1;

@end

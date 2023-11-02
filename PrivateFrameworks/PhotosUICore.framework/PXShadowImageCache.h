
@interface PXShadowImageCache : NSObject {
    NSMapTable * _weakCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)stretchableShadowImageFor:(id)arg1 cornerRadius:(double)arg2 screenScale:(double)arg3;

@end

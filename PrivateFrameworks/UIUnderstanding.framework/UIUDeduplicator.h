
@interface UIUDeduplicator : NSObject {
    UIDeduplicatorCompat * _underlyingObject;
}

@property (readonly) UIDeduplicatorCompat *underlyingObject;

+ (bool)areModelsAvailable;
+ (bool)downloadModelSet:(long long)arg1 timeout:(double)arg2;
+ (bool)downloadModels:(double)arg1;

- (void).cxx_destruct;
- (id)addElementsForScreen:(id)arg1 candidates:(id)arg2 screenGroupID:(id)arg3;
- (id)identifyElements:(id)arg1 elements:(id)arg2;
- (id)identifyImage:(id)arg1 image:(struct CGImage { }*)arg2;
- (id)init:(long long)arg1;
- (id)initWithPortraitModels;
- (id)initWithSquareModels;
- (id)underlyingObject;

@end

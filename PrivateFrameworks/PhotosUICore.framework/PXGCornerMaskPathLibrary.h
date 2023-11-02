
@interface PXGCornerMaskPathLibrary : NSObject {
    NSMutableDictionary * _cache;
}

+ (id)sharedLibrary;

- (void).cxx_destruct;
- (id)init;
- (id)pathForCornerRadius:(double)arg1 continuousCorners:(bool)arg2 screenScale:(double)arg3 maskColor:(id)arg4;

@end

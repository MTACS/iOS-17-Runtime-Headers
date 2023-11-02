
@interface MUICachingSVGConverter : NSObject {
    NSCache * _cache;
}

@property (nonatomic, readonly) NSCache *cache;

- (void).cxx_destruct;
- (id)cache;
- (void)imageForSVGData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)init;

@end

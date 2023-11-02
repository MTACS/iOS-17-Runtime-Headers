
@interface SBIconLabelImageCache : NSObject <BSDescriptionProviding> {
    CPMemoryPool * _colorPool;
    CPMemoryPool * _grayPool;
    NSMutableDictionary * _labelImages;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxLabelSize;
    double  _scale;
}

@property (nonatomic, readonly) CPMemoryPool *colorPool;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPMemoryPool *grayPool;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxLabelSize;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cacheLabelImageForParameters:(id)arg1;
- (id)cachedLabelImageForParameters:(id)arg1;
- (id)cachedLabelImagesWithParametersPassingTest:(id /* block */)arg1;
- (id)colorPool;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)generateAndStoreLabelImageForParameters:(id)arg1;
- (id)grayPool;
- (id)initWithMaxLabelSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)labelImageForParameters:(id)arg1;
- (struct CGSize { double x1; double x2; })maxLabelSize;
- (unsigned long long)numberOfCacheHits;
- (unsigned long long)numberOfCacheMisses;
- (unsigned long long)numberOfCachedImages;
- (void)removeLabelImageForParameters:(id)arg1;
- (void)removeLabelImagesWithParametersPassingTest:(id /* block */)arg1;
- (double)scale;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end


@interface _PXStoryStyleChromePreloadingRecord : NSObject {
    double  _displayScale;
    <PXStoryStyleDescriptor> * _styleInfo;
    <PXStoryViewLayoutSpec> * _viewLayoutSpec;
}

@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) <PXStoryStyleDescriptor> *styleInfo;
@property (nonatomic, readonly) <PXStoryViewLayoutSpec> *viewLayoutSpec;

- (void).cxx_destruct;
- (double)displayScale;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDisplayScale:(double)arg1 styleInfo:(id)arg2 viewLayoutSpec:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)styleInfo;
- (id)viewLayoutSpec;

@end


@interface BWMultiFilterThumbnailNode : BWNode {
    BWColorLookupCache * _colorLookupCache;
    FigColorCubeMetalFilter * _filter;
    NSArray * _filters;
    int  _maxLossyCompressionLevel;
    struct opaqueCMFormatDescription { } * _mostRecentFormatDescription;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

+ (void)initialize;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithFilters:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2 maxLossyCompressionLevel:(int)arg3;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end

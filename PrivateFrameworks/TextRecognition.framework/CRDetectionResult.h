
@interface CRDetectionResult : NSObject {
    NSArray * _lines;
    NSArray * _pyramidPreIntraScaleNMSTextFeatures;
    NSMutableArray * _pyramidScaleName;
    NSMutableArray * _pyramidScaleSize;
    /* Warning: unhandled struct encoding: '{vector<CRNormalizedQuad *, std::allocator<CRNormalizedQuad *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<CRNormalizedQuad *__strong *, std::allocator<CRNormalizedQuad *>>="__value_"^@}}' */ struct vector<CRNormalizedQuad *, std::allocator<CRNormalizedQuad *>> { 
        __end_ **__begin_; 
    }  _tableRegions;
}

@property (readonly) NSArray *lines;
@property (nonatomic, retain) NSArray *pyramidPreIntraScaleNMSTextFeatures;
@property (nonatomic, retain) NSMutableArray *pyramidScaleName;
@property (nonatomic, retain) NSMutableArray *pyramidScaleSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLines:(id)arg1;
- (id)lines;
- (id)pyramidPreIntraScaleNMSTextFeatures;
- (id)pyramidScaleName;
- (id)pyramidScaleSize;
- (void)setPyramidPreIntraScaleNMSTextFeatures:(id)arg1;
- (void)setPyramidScaleName:(id)arg1;
- (void)setPyramidScaleSize:(id)arg1;
- (void)setTableRegions:(const void*)arg1;
- (const void*)tableRegions;

@end

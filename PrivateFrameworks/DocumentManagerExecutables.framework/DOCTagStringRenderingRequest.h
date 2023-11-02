
@interface DOCTagStringRenderingRequest : DOCTagRenderingRequest {
    double  _tagBaselineAdjustment;
    double  _tagToTitleSpacing;
    NSString * _text;
    NSDictionary * _textAttributes;
}

@property (nonatomic) double tagBaselineAdjustment;
@property (nonatomic) double tagToTitleSpacing;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSDictionary *textAttributes;

+ (id)requestForChainedTags:(id)arg1 tagDimension:(double)arg2 text:(id)arg3 textAttributes:(id)arg4;
+ (id)requestForTag:(id)arg1 tagDimension:(double)arg2 text:(id)arg3 textAttributes:(id)arg4 variant:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)_UIImageCacheKeyWithAdditionalComponents:(id)arg1;
- (id)init;
- (void)setTagBaselineAdjustment:(double)arg1;
- (void)setTagToTitleSpacing:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (double)tagBaselineAdjustment;
- (double)tagToTitleSpacing;
- (id)text;
- (id)textAttributes;

@end

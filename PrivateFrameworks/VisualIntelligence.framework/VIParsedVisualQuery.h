
@interface VIParsedVisualQuery : NSObject <NSCopying> {
    <VIImageContent> * _image;
    VIQueryContext * _queryContext;
    VIVisualUnderstanding * _visualUnderstanding;
}

@property (nonatomic, readonly) <VIImageContent> *image;
@property (nonatomic, readonly) VIQueryContext *queryContext;
@property (nonatomic, readonly) VIVisualUnderstanding *visualUnderstanding;

+ (id)queryWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 imageRegions:(id)arg3 payload:(id)arg4;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 imageRegions:(id)arg3 textBlockAnnotation:(id)arg4 queryContext:(id)arg5 payload:(id)arg6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)image;
- (id)initWithImage:(id)arg1 imageRegions:(id)arg2 textBlockAnnotation:(id)arg3 queryContext:(id)arg4 payload:(id)arg5;
- (id)initWithImage:(id)arg1 visualUnderstanding:(id)arg2 queryContext:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)queryContext;
- (id)visualUnderstanding;

@end


@interface VIVisualQuery : NSObject <NSCopying> {
    VIAnnotation * _annotation;
    NSSet * _domainsOfInterest;
    <VIImageContent> * _image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedRegionOfInterest;
    VIQueryContext * _queryContext;
}

@property (nonatomic, readonly) VIAnnotation *annotation;
@property (nonatomic, readonly) NSSet *domainsOfInterest;
@property (nonatomic, readonly) <VIImageContent> *image;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedRegionOfInterest;
@property (nonatomic, readonly) VIQueryContext *queryContext;

+ (id)queryWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 annotation:(id)arg4 queryContext:(id)arg5;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 textBlockAnnotation:(id)arg4 queryContext:(id)arg5;

- (void).cxx_destruct;
- (id)annotation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainsOfInterest;
- (id)image;
- (id)initWithImage:(id)arg1 annotation:(id)arg2 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 domainsOfInterest:(id)arg4 queryContext:(id)arg5;
- (id)initWithImage:(id)arg1 textBlockAnnotation:(id)arg2 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 domainsOfInterest:(id)arg4 queryContext:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedRegionOfInterest;
- (id)queryContext;

@end

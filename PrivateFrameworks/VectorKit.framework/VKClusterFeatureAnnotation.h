
@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _customFeature;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (id)feature;
- (id)initWithClusterNode:(void*)arg1 clusterTree:(const void*)arg2 baseStyle:(const void*)arg3 imageText:(id)arg4 annotationText:(id)arg5 annotationLocale:(id)arg6;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end

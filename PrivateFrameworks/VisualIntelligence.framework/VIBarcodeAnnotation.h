
@interface VIBarcodeAnnotation : NSObject {
    NSArray * _annotationItems;
}

@property (nonatomic, readonly, copy) NSArray *annotationItems;

+ (id)annotationFromObservations:(id)arg1;

- (void).cxx_destruct;
- (id)annotationItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAnnotationItems:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

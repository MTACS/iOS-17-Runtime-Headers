
@interface VIBarcodeAnnotationItem : NSObject {
    float  _confidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedBoundingBox;
    NSString * _payloadStringValue;
    NSString * _symbology;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingBox;
@property (nonatomic, readonly, copy) NSString *payloadStringValue;
@property (nonatomic, readonly, copy) NSString *symbology;

+ (id)annotationItemFromObservation:(id)arg1;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSymbology:(id)arg1 payloadStringValue:(id)arg2 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 confidence:(float)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingBox;
- (id)payloadStringValue;
- (id)symbology;

@end

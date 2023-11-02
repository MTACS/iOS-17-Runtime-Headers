
@interface CAMTextRegionResult : NSObject <CAMMetadataObjectResult> {
    AVMetadataTextRegionObject * __metadataTextRegionObject;
    double  _baselineAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) AVMetadataTextRegionObject *_metadataTextRegionObject;
@property (nonatomic, readonly) double baselineAngle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) float confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *metadataType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long syntheticFocusMode;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_metadataTextRegionObject;
- (double)baselineAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (float)confidence;
- (id)description;
- (id)initWithTextRegionObject:(id)arg1;
- (id)metadataType;
- (void)set_metadataTextRegionObject:(id)arg1;
- (id)underlyingMetadataObject;
- (id)uniqueIdentifier;

@end

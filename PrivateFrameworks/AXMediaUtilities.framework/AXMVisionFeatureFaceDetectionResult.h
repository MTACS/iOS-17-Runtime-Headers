
@interface AXMVisionFeatureFaceDetectionResult : NSObject <NSSecureCoding> {
    AXMVisionFeatureFaceAttributes * _attributes;
    double  _attributesConfidence;
    NSDictionary * _expressionsAndConfidence;
    unsigned long long  _faceId;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    AXMVisionFeatureFaceLandmarks * _landmarks;
    AXMVisionFeatureFaceLandmarks * _landmarks3d;
    double  _landmarksConfidence;
    long long  _likelyExpression;
    NSString * _name;
    double  _nameConfidence;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    double  _poseConfidence;
    double  _rectanglesConfidence;
    NSUUID * _uuid;
}

@property (nonatomic, retain) AXMVisionFeatureFaceAttributes *attributes;
@property (nonatomic) double attributesConfidence;
@property (nonatomic, retain) NSDictionary *expressionsAndConfidence;
@property (nonatomic) unsigned long long faceId;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) AXMVisionFeatureFaceLandmarks *landmarks;
@property (nonatomic, retain) AXMVisionFeatureFaceLandmarks *landmarks3d;
@property (nonatomic) double landmarksConfidence;
@property (nonatomic, readonly) long long likelyExpression;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double nameConfidence;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property (nonatomic) double poseConfidence;
@property (nonatomic) double rectanglesConfidence;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)localizedStringFormatterForExpression:(id)arg1;
+ (id)nameForFaceExpression:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_expressionForString:(id)arg1;
- (id)_init;
- (id)attributes;
- (double)attributesConfidence;
- (double)confidenceForExpression:(long long)arg1;
- (id)descriptionForExpression:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionsAndConfidence;
- (unsigned long long)faceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)landmarks;
- (id)landmarks3d;
- (double)landmarksConfidence;
- (long long)likelyExpression;
- (id)name;
- (double)nameConfidence;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (double)poseConfidence;
- (double)rectanglesConfidence;
- (void)setAttributes:(id)arg1;
- (void)setAttributesConfidence:(double)arg1;
- (void)setExpressionsAndConfidence:(id)arg1;
- (void)setFaceId:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLandmarks3d:(id)arg1;
- (void)setLandmarks:(id)arg1;
- (void)setLandmarksConfidence:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNameConfidence:(double)arg1;
- (void)setPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPoseConfidence:(double)arg1;
- (void)setRectanglesConfidence:(double)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end

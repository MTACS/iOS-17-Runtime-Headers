
@interface CRImageReaderOutput : NSObject <CRCodable, NSCopying, NSSecureCoding> {
    float  _baselineAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSArray * _candidates;
    NSArray * _components;
    int  _confidence;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isTitle;
    NSString * _stringValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
    NSString * _type;
}

@property float baselineAngle;
@property (readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) NSArray *candidates;
@property (readonly) NSArray *components;
@property int confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } imageSize;
@property bool isTitle;
@property (retain) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (readonly) struct CGPoint { double x1; double x2; } topRight;
@property (readonly) NSString *type;

+ (int)confidenceLevelForConfidenceScore:(double)arg1 confidenceThresholds:(id)arg2;
+ (id)outputWithType:(id)arg1 outputRegion:(id)arg2 isTitle:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_rotatePointIfNeccessary:(struct CGPoint { double x1; double x2; })arg1 anchor:(struct CGPoint { double x1; double x2; })arg2 angle:(double)arg3;
- (float)baselineAngle;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)boundingQuad;
- (id)candidates;
- (id)components;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornersForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)crCodableDataRepresentation;
- (id)decodeOutputsArrayFromData:(id)arg1 offset:(unsigned long long*)arg2 version:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initV1WithCoder:(id)arg1;
- (id)initV2WithDataRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 outputRegion:(id)arg2 isTitle:(bool)arg3;
- (id)initWithType:(id)arg1 outputRegion:(id)arg2 isTitle:(bool)arg3 withCandidates:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToImageReaderOutput:(id)arg1;
- (bool)isTitle;
- (id)quadForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (void)setBaselineAngle:(float)arg1;
- (void)setConfidence:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsTitle:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)type;

@end

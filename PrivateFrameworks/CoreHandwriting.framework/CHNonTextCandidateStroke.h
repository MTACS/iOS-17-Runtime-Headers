
@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
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
    double  _boundsDiagonal;
    long long  _classificationAsNonText;
    double  _containerScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _enlargedBounds;
    long long  _fallbackClassification;
    double  _lineError;
    double  _lineOrientationAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rotatedBounds;
    CHEncodedStrokeIdentifier * _strokeIdentifier;
    long long  _substrokesCount;
    double  _support;
    NSMutableDictionary * _supportByStrokeIdentifier;
}

@property (nonatomic, readonly) long long effectiveClassification;
@property (nonatomic, readonly) CHEncodedStrokeIdentifier *strokeIdentifier;
@property (nonatomic, readonly) double support;
@property (nonatomic, readonly) NSDictionary *supportByStrokeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)effectiveClassification;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 fallbackClassification:(long long)arg7;
- (id)initWithStrokeIdentifier:(id)arg1 substrokesCount:(long long)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 fallbackClassification:(long long)arg7 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 boundsDiagonal:(double)arg9 enlargedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg10 rotatedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg11 supportByStrokeIdentifier:(id)arg12 support:(double)arg13;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)strokeIdentifier;
- (double)support;
- (id)supportByStrokeIdentifier;

@end

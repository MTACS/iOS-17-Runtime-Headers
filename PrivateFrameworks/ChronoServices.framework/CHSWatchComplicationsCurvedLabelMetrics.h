
@interface CHSWatchComplicationsCurvedLabelMetrics : NSObject <BSXPCSecureCoding, NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _accessoryMaxSize;
    double  _accessoryPadding;
    unsigned long long  _accessoryPlacement;
    double  _centerAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _circleCenter;
    double  _circleRadius;
    double  _fontSize;
    bool  _interior;
    double  _maximumAngularWidth;
    BSColor * _textColor;
    double  _tracking;
}

@property (nonatomic) struct CGSize { double x1; double x2; } accessoryMaxSize;
@property (nonatomic) double accessoryPadding;
@property (nonatomic) unsigned long long accessoryPlacement;
@property (nonatomic) double centerAngle;
@property (nonatomic) struct CGPoint { double x1; double x2; } circleCenter;
@property (nonatomic) double circleRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interior;
@property (nonatomic) double maximumAngularWidth;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSColor *textColor;
@property (nonatomic) double tracking;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })accessoryMaxSize;
- (double)accessoryPadding;
- (unsigned long long)accessoryPlacement;
- (double)centerAngle;
- (struct CGPoint { double x1; double x2; })circleCenter;
- (double)circleRadius;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (double)fontSize;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithInterior:(bool)arg1 tracking:(double)arg2 circleCenter:(struct CGPoint { double x1; double x2; })arg3 circleRadius:(double)arg4 maximumAngularWidth:(double)arg5 centerAngle:(double)arg6 fontSize:(double)arg7 textColor:(id)arg8 accessoryPlacement:(unsigned long long)arg9 accessoryPadding:(double)arg10 accessoryMaxSize:(struct CGSize { double x1; double x2; })arg11;
- (bool)interior;
- (bool)isEqual:(id)arg1;
- (double)maximumAngularWidth;
- (void)setAccessoryMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAccessoryPadding:(double)arg1;
- (void)setAccessoryPlacement:(unsigned long long)arg1;
- (void)setCenterAngle:(double)arg1;
- (void)setCircleCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCircleRadius:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setInterior:(bool)arg1;
- (void)setMaximumAngularWidth:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTracking:(double)arg1;
- (id)textColor;
- (double)tracking;

@end

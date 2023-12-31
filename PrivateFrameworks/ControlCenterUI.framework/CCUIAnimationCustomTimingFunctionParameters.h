
@interface CCUIAnimationCustomTimingFunctionParameters : NSObject <CCUIAnimationTimingFunctionDescription> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _controlPoint1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _controlPoint2;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint1;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint2;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)functionWithControlPoint1:(struct CGPoint { double x1; double x2; })arg1 controlPoint2:(struct CGPoint { double x1; double x2; })arg2;

- (id)_initWithControlPoint1:(struct CGPoint { double x1; double x2; })arg1 controlPoint2:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })controlPoint1;
- (struct CGPoint { double x1; double x2; })controlPoint2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end

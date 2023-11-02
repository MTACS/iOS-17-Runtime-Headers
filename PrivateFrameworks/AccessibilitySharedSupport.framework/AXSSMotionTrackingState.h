
@interface AXSSMotionTrackingState : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    NSSet * _expressions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lookAtPoint;
}

@property (nonatomic, readonly, copy) NSString *debugString;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) NSSet *expressions;
@property (nonatomic, readonly) bool hasFace;
@property (nonatomic) struct CGPoint { double x1; double x2; } lookAtPoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)expressions;
- (bool)hasFace;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })lookAtPoint;
- (void)setError:(id)arg1;
- (void)setExpressions:(id)arg1;
- (void)setLookAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end


@interface HMIPoint : HMFObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (readonly) struct CGPoint { double x1; double x2; } point;
@property (readonly) double x;
@property (readonly) double y;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })point;
- (double)x;
- (double)y;

@end

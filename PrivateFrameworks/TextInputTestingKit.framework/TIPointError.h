
@interface TIPointError : NSObject <NSCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _errorVector;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } errorVector;

+ (id)errorWithErrorVector:(struct CGPoint { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })applyToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })errorVector;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrorVector:(struct CGPoint { double x1; double x2; })arg1;

@end

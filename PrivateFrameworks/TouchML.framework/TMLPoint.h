
@interface TMLPoint : NSObject <NSCopying, TMLPointJSExports> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;

+ (void)initializeJSContext:(id)arg1;

- (id)CGPointValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })point;
- (double)x;
- (double)y;

@end
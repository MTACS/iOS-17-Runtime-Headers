
@interface SCRCGestureFinger : NSObject {
    unsigned long long  _identifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _pressure;
}

- (id)description;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 pressure:(double)arg3;
- (struct CGPoint { double x1; double x2; })location;
- (double)pressure;
- (long long)type;

@end

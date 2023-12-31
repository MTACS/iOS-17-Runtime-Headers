
@interface PAEKeyerOMVertex : NSObject <NSSecureCoding> {
    NSNumber * _bx;
    NSNumber * _by;
    NSNumber * _lx;
    NSNumber * _ly;
    NSNumber * _mx;
    NSNumber * _my;
    NSNumber * _rx;
    NSNumber * _ry;
}

+ (bool)supportsSecureCoding;

- (float)bx;
- (float)by;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)lx;
- (float)ly;
- (float)mx;
- (float)my;
- (float)rx;
- (float)ry;
- (void)setBx:(id)arg1;
- (void)setBy:(id)arg1;
- (void)setLx:(id)arg1;
- (void)setLy:(id)arg1;
- (void)setMx:(id)arg1;
- (void)setMy:(id)arg1;
- (void)setRx:(id)arg1;
- (void)setRy:(id)arg1;

@end


@interface ARUIHashBuilder : NSObject {
    unsigned long long  _hash;
}

+ (id)builder;

- (void)appendBool:(bool)arg1;
- (void)appendCGFloat:(double)arg1;
- (void)appendCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendDouble:(double)arg1;
- (void)appendFloat2;
- (void)appendFloat4;
- (void)appendFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)appendFloat:(float)arg1;
- (void)appendInt:(long long)arg1;
- (void)appendObject:(id)arg1;
- (void)appendTimeInterval:(double)arg1;
- (void)appendUnsignedInt:(unsigned long long)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashForCGFloat:(double)arg1;
- (unsigned long long)hashForDouble:(double)arg1;
- (unsigned long long)hashForFloat:(float)arg1;
- (unsigned long long)hashForNSTimeInterval:(double)arg1;
- (id)init;

@end

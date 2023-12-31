
@interface GLKHashableBigInt : NSObject <NSCopying> {
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    }  _bigInt;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBigInt:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg1;
- (bool)isEqual:(id)arg1;

@end

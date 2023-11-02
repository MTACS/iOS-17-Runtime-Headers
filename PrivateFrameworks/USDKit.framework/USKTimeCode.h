
@interface USKTimeCode : NSObject {
    struct SdfTimeCode { 
        double _time; 
    }  _timeCode;
}

- (id).cxx_construct;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithDouble:(double)arg1;
- (id)initWithSdfTimeCode:(struct SdfTimeCode { double x1; })arg1;
- (bool)isEqual:(id)arg1;
- (struct SdfTimeCode { double x1; })sdfTimeCode;

@end


@interface VIE5RunnerPortDesc : NSObject {
    unsigned long long  _csize;
    union VIE5RunnerPortDType { 
        unsigned long long surface; 
        unsigned long long tensor; 
    }  _dtype;
    NSArray * _shape;
    NSArray * _strides;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long csize;
@property (nonatomic, readonly) union VIE5RunnerPortDType { unsigned long long x1; unsigned long long x2; } dtype;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) NSArray *strides;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)csize;
- (union VIE5RunnerPortDType { unsigned long long x1; unsigned long long x2; })dtype;
- (id)initWithShape:(id)arg1 type:(unsigned long long)arg2 dtype:(union VIE5RunnerPortDType { unsigned long long x1; unsigned long long x2; })arg3 csize:(unsigned long long)arg4 strides:(id)arg5;
- (id)shape;
- (id)strides;
- (unsigned long long)type;

@end

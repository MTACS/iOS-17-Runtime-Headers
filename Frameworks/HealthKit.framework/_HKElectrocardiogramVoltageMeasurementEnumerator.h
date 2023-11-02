
@interface _HKElectrocardiogramVoltageMeasurementEnumerator : NSEnumerator {
    struct __wrap_iter<const float *> { 
        float *__i_; 
    }  _current;
    HKElectrocardiogram * _electrocardiogram;
    struct __wrap_iter<const float *> { 
        float *__i_; 
    }  _end;
    long long  _index;
    HKUnit * _microvoltsUnit;
    double  _samplingHertz;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithElectrocardiogram:(id)arg1 leadIMicroVoltsBegin:(struct __wrap_iter<const float *> { float *x1; })arg2 end:(struct __wrap_iter<const float *> { float *x1; })arg3;
- (id)nextObject;

@end

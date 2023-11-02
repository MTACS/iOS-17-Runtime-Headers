
@interface _UIVelocityIntegrator : NSObject {
    id /* block */  _didResetHysteresisOnThetaDiffHandler;
    bool  _hasMemoizedVelocity;
    double  _hysteresisTimeInterval;
    long long  _maxNumberOfSamples;
    union { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*vector; 
    }  _memoizedVelocity;
    double  _minimumRequiredMovement;
    double  _resetHysteresisOnSampleThetaDiff;
    struct deque<_UIVelocityIntegratorDataSample, std::allocator<_UIVelocityIntegratorDataSample>> { 
        struct __split_buffer<_UIVelocityIntegratorDataSample *, std::allocator<_UIVelocityIntegratorDataSample *>> { 
            struct _UIVelocityIntegratorDataSample {} **__first_; 
            struct _UIVelocityIntegratorDataSample {} **__begin_; 
            struct _UIVelocityIntegratorDataSample {} **__end_; 
            struct __compressed_pair<_UIVelocityIntegratorDataSample **, std::allocator<_UIVelocityIntegratorDataSample *>> { 
                struct _UIVelocityIntegratorDataSample {} **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<_UIVelocityIntegratorDataSample>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _samples;
    union { 
        struct { 
            double x; 
            double y; 
            double z; 
        } ; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*vector; 
    }  _totalTranslation;
}

@property (nonatomic) double hysteresisTimeInterval;
@property (nonatomic) double minimumRequiredMovement;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } offset;
@property (nonatomic, readonly) union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } offset3D;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } velocity;
@property (nonatomic, readonly) union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } velocity3D;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSample3D:(union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })arg1;
- (void)addSample:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasVelocity;
- (double)hysteresisTimeInterval;
- (id)init;
- (double)minimumRequiredMovement;
- (struct CGVector { double x1; double x2; })offset;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })offset3D;
- (void)reset;
- (void)setHysteresisTimeInterval:(double)arg1;
- (void)setMinimumRequiredMovement:(double)arg1;
- (struct CGVector { double x1; double x2; })velocity;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })velocity3D;

@end

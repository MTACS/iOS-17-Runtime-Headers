
@interface CBSoftWakeDisplayDelegate : NSObject {
    struct __DisplayFactorFade { 
        double period; 
        double startTime; 
        float Ftarget; 
        float Fcurrent; 
        float Fstart; 
        float coeff[3]; 
        int (*rampDoneCallback)(); 
        void *refcon; 
    }  _fade;
    NSObject<OS_os_log> * _logHandle;
    long long  _state;
}

@property (nonatomic, readonly) struct __DisplayFactorFade { double x1; double x2; float x3; float x4; float x5; float x6[3]; int (*x7)(); void *x8; }*fade;

+ (bool)isSupported;

- (long long)action:(long long)arg1;
- (void)dealloc;
- (struct __DisplayFactorFade { double x1; double x2; float x3; float x4; float x5; float x6[3]; int (*x7)(); void *x8; }*)fade;
- (id)init;
- (bool)isActive;
- (long long)setFactor:(float)arg1 withFade:(float)arg2;

@end

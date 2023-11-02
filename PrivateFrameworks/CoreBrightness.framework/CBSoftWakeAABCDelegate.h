
@interface CBSoftWakeAABCDelegate : NSObject {
    struct CustomCurve { 
        float _E[20]; 
        float _L[20]; 
        int size; 
    }  _curve;
    long long  _state;
}

@property (nonatomic, readonly) struct CustomCurve { float x1[20]; float x2[20]; int x3; } curve;

+ (bool)isSupported;

- (long long)action:(long long)arg1;
- (struct CustomCurve { float x1[20]; float x2[20]; int x3; })curve;
- (id)init;
- (bool)isActive;

@end

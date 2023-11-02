
@interface CCUICASpringAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {
    double  _damping;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _frameRateRange;
    unsigned int  _highFrameRateReason;
    double  _mass;
    double  _stiffness;
    <CCUIAnimationTimingFunctionDescription> * _timingFunction;
}

@property (nonatomic, readonly) double damping;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } frameRateRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int highFrameRateReason;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) double stiffness;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <CCUIAnimationTimingFunctionDescription> *timingFunction;

- (void).cxx_destruct;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (id)description;
- (struct CAFrameRateRange { float x1; float x2; float x3; })frameRateRange;
- (unsigned long long)hash;
- (unsigned int)highFrameRateReason;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)mass;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)stiffness;
- (id)timingFunction;

@end

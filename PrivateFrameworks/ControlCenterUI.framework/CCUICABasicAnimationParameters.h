
@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {
    double  _duration;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _frameRateRange;
    unsigned int  _highFrameRateReason;
    <CCUIAnimationTimingFunctionDescription> * _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } frameRateRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int highFrameRateReason;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <CCUIAnimationTimingFunctionDescription> *timingFunction;

- (void).cxx_destruct;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (struct CAFrameRateRange { float x1; float x2; float x3; })frameRateRange;
- (unsigned long long)hash;
- (unsigned int)highFrameRateReason;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)timingFunction;

@end

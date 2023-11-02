
@interface CCUIC2AnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _frameRateRange;
    double  _friction;
    unsigned int  _highFrameRateReason;
    bool  _interactive;
    double  _tension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } frameRateRange;
@property (nonatomic, readonly) double friction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int highFrameRateReason;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tension;

- (id)_initWithAnimationParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CAFrameRateRange { float x1; float x2; float x3; })frameRateRange;
- (double)friction;
- (unsigned long long)hash;
- (unsigned int)highFrameRateReason;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)tension;

@end

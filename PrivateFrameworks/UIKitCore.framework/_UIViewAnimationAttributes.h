
@interface _UIViewAnimationAttributes : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    double  _delay;
    double  _duration;
    bool  _hasSpringAttributes;
    unsigned long long  _options;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _preferredFrameRateRange;
    double  _springDamping;
    double  _springMass;
    double  _springStiffness;
    double  _springVelocity;
    unsigned int  _updateReason;
}

@property (getter=_curve, nonatomic, readonly) long long curve;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_delay, nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (getter=_duration, nonatomic, readonly) double duration;
@property (getter=_frameInterval, nonatomic, readonly) double frameInterval;
@property (getter=_hasSpringAttributes, nonatomic, readonly) bool hasSpringAttributes;
@property (readonly) unsigned long long hash;
@property (getter=_preferredFrameRateRange, nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (getter=_springDamping, nonatomic, readonly) double springDamping;
@property (getter=_springMass, nonatomic, readonly) double springMass;
@property (getter=_springStiffness, nonatomic, readonly) double springStiffness;
@property (getter=_springVelocity, nonatomic, readonly) double springVelocity;
@property (readonly) Class superclass;
@property (getter=_updateReason, nonatomic, readonly) unsigned int updateReason;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (long long)_curve;
- (double)_delay;
- (double)_duration;
- (double)_frameInterval;
- (bool)_hasSpringAttributes;
- (struct CAFrameRateRange { float x1; float x2; float x3; })_preferredFrameRateRange;
- (double)_springDamping;
- (double)_springMass;
- (double)_springStiffness;
- (double)_springVelocity;
- (unsigned int)_updateReason;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

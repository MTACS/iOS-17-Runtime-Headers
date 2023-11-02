
@interface MADVideoSafetyFrameSampling : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _frameLimit;
    unsigned long long  _framesPerSync;
    bool  _uniformSampling;
}

@property (nonatomic, readonly) unsigned long long frameLimit;
@property (nonatomic, readonly) unsigned long long framesPerSync;
@property (nonatomic, readonly) bool uniformSampling;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameLimit;
- (unsigned long long)framesPerSync;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrameLimit:(unsigned long long)arg1 uniformSampling:(bool)arg2;
- (id)initWithFramesPerSync:(unsigned long long)arg1 frameLimit:(unsigned long long)arg2 uniformSampling:(bool)arg3;
- (bool)uniformSampling;

@end

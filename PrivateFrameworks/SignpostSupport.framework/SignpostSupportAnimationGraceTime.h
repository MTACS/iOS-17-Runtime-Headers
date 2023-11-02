
@interface SignpostSupportAnimationGraceTime : NSObject {
    unsigned long long  _animationType;
    unsigned long long  _firstFrameGraceTimeMs;
}

@property (nonatomic, readonly) unsigned long long animationType;
@property (nonatomic) unsigned long long firstFrameGraceTimeMs;

- (unsigned long long)animationType;
- (unsigned long long)firstFrameGraceTimeMs;
- (id)initWithAnimationType:(unsigned long long)arg1 firstFrameGraceTimeMs:(unsigned long long)arg2;
- (void)setFirstFrameGraceTimeMs:(unsigned long long)arg1;

@end

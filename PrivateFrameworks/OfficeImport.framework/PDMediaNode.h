
@interface PDMediaNode : PDTimeNode {
    bool  mIsMuted;
    bool  mIsShowWhenStopped;
    long long  mNumberOfSlides;
    PDAnimationTarget * mTarget;
    long long  mVolume;
}

- (void).cxx_destruct;
- (id)init;
- (bool)isMuted;
- (bool)isShowWhenStopped;
- (long long)numberOfSlides;
- (void)setIsMuted:(bool)arg1;
- (void)setIsShowWhenStopped:(bool)arg1;
- (void)setNumberOfSlides:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setVolume:(long long)arg1;
- (id)target;
- (long long)volume;

@end


@interface WebAnimationDelegate : NSObject {
    void * m_owner;
}

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)setOwner:(void*)arg1;

@end

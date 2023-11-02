
@interface SKParticleSystemNode : SKNode {
    void * _skcParticleSystemNode;
}

- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;

@end

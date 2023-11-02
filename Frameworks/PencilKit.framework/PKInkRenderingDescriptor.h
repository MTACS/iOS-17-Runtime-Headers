
@interface PKInkRenderingDescriptor : NSObject {
    unsigned long long  _blendMode;
    PKInkParticleDescriptor * _particleDescriptor;
    PKInkParticleDescriptor * _secondaryParticleDescriptor;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long blendMode;
@property (nonatomic, readonly) PKInkParticleDescriptor *particleDescriptor;
@property (nonatomic, readonly) PKInkParticleDescriptor *secondaryParticleDescriptor;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)blendMode;
- (id)initWithType:(unsigned long long)arg1 blendMode:(unsigned long long)arg2 particleDescriptor:(id)arg3 secondaryParticleDescriptor:(id)arg4;
- (id)mutableCopy;
- (id)particleDescriptor;
- (id)secondaryParticleDescriptor;
- (unsigned long long)type;

@end

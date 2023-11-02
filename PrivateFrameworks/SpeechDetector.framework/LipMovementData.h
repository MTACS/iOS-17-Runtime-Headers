
@interface LipMovementData : NSObject {
    unsigned long long  _absMachTime;
    NSArray * _blendshapes;
}

@property (nonatomic, readonly) unsigned long long absMachTime;
@property (nonatomic, readonly) NSArray *blendshapes;

- (void).cxx_destruct;
- (unsigned long long)absMachTime;
- (id)blendshapes;
- (id)initWithBlendshape:(id)arg1 andTime:(unsigned long long)arg2;

@end

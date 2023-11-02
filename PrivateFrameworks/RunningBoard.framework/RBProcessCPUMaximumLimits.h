
@interface RBProcessCPUMaximumLimits : NSObject {
    unsigned long long  _duration;
    unsigned long long  _percentage;
    unsigned long long  _violationPolicy;
}

@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly) unsigned long long percentage;
@property (nonatomic, readonly) unsigned long long violationPolicy;

- (id)description;
- (unsigned long long)duration;
- (unsigned long long)hash;
- (id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2 violationPolicy:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)percentage;
- (id)unionLimit:(id)arg1;
- (unsigned long long)violationPolicy;

@end

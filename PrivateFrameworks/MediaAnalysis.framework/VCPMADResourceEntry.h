
@interface VCPMADResourceEntry : NSObject {
    long long  _activeCount;
    long long  _currentCost;
    VCPMADResource * _resource;
}

@property (nonatomic) long long activeCount;
@property (nonatomic) long long currentCost;
@property (nonatomic, retain) VCPMADResource *resource;

- (void).cxx_destruct;
- (long long)activeCount;
- (long long)currentCost;
- (id)initWithResource:(id)arg1;
- (id)resource;
- (void)setActiveCount:(long long)arg1;
- (void)setCurrentCost:(long long)arg1;
- (void)setResource:(id)arg1;

@end

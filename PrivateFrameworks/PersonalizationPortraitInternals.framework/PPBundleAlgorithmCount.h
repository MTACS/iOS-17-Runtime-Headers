
@interface PPBundleAlgorithmCount : NSObject {
    unsigned int  _algorithm;
    NSString * _bundleId;
    unsigned int  _count;
}

@property (nonatomic) unsigned int algorithm;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) unsigned int count;

- (void).cxx_destruct;
- (unsigned int)algorithm;
- (id)bundleId;
- (unsigned int)count;
- (void)setAlgorithm:(unsigned int)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCount:(unsigned int)arg1;

@end

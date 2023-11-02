
@interface ShotflowDetectorANODv4 : ShotflowDetectorANODBase

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;

- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;
- (id)initWithNetwork:(id)arg1;
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;
- (id)nmsBoxes:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;

@end

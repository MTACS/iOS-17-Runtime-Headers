
@interface ShotflowDetectorANFDv2 : ShotflowDetectorANODBase

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;

- (id)initWithNetwork:(id)arg1;
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;
- (id)nmsBoxes:(id)arg1;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;

@end

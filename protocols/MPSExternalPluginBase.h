
@protocol MPSExternalPluginBase <NSObject>

@required

- (<MTLDevice> *)device;
- (id)initWithDevice:(id <MTLDevice>)arg1;
- (unsigned long long)maxBatchSize;

@end

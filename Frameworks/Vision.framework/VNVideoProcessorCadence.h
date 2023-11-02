
@interface VNVideoProcessorCadence : NSObject <NSCopying, VNVideoProcessorRequestConfigurationPopulating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)arg1;

@end

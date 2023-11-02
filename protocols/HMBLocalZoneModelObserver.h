
@protocol HMBLocalZoneModelObserver <NSObject>

@required

- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelCreation:(HMBProcessingModelCreation *)arg2;
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelDeletion:(HMBProcessingModelDeletion *)arg2;
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelUpdate:(HMBProcessingModelUpdate *)arg2;

@end

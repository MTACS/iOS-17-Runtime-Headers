
@interface ATXMinimalActionParameters : NSObject <NSCopying> {
    NSDate * _actionTime;
    NSString * _actionType;
    NSString * _bundleId;
    ATXMinimalSlotResolutionParameters * _minimalSlotResolutionParams;
}

@property (nonatomic, retain) NSDate *actionTime;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) ATXMinimalSlotResolutionParameters *minimalSlotResolutionParams;

- (void).cxx_destruct;
- (id)actionTime;
- (id)actionType;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getContainerWithScore:(float)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMinimalSlotResolutionParameters:(id)arg1 actionTime:(id)arg2 bundleId:(id)arg3 actionType:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)minimalSlotResolutionParams;
- (void)setActionTime:(id)arg1;

@end

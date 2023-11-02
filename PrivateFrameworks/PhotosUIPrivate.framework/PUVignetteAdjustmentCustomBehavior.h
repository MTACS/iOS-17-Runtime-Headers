
@interface PUVignetteAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 populateNewAdjustmentController:(id)arg3;

@end

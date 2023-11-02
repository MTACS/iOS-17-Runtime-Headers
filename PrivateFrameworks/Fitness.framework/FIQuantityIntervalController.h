
@interface FIQuantityIntervalController : NSObject <FIIntervalController> {
    FIIntervalQuantityTrigger * _quantityTrigger;
    FIMutableTimeSliceGroup * _sliceGroup;
}

@property (nonatomic, readonly) bool allSlicesFinalized;
@property (nonatomic, readonly) bool intervalComplete;
@property (nonatomic, readonly) NSDate *intervalEndDate;

- (void).cxx_destruct;
- (bool)_updateTriggerWithSample:(id)arg1;
- (void)addSample:(id)arg1;
- (bool)allSlicesFinalized;
- (id)initWithIntervalQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 trackedQuantityTypes:(id)arg4;
- (bool)intervalComplete;
- (bool)isIntervalEndDate;

@end

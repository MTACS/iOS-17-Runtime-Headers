
@interface FIMutableTimeSliceGroup : NSObject {
    NSArray * _slices;
}

@property (nonatomic, readonly) bool allSlicesFinalized;
@property (nonatomic, readonly) NSArray *slices;

+ (id)timeSliceGroupForQuantityTypes:(id)arg1 startDate:(id)arg2;

- (void).cxx_destruct;
- (bool)allSlicesFinalized;
- (void)commitAllSlicesToDate:(id)arg1;
- (id)initWithTimeSlices:(id)arg1;
- (id)slices;
- (void)updateSlicesWithEndDate:(id)arg1;
- (void)updateSlicesWithSample:(id)arg1;

@end

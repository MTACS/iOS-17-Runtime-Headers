
@interface ATXHeuristicRequestRideForEventActionMaker : ATXHeuristicActionMaker {
    ATXHeuristicObjectHandle * _dropoffEvent;
    CLLocation * _pickupLocation;
    NSString * _preferredAppBundleID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_makeAction;
- (id)actionTypeName;
- (id)dropOffLocationFromEKEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 pickupLocation:(id)arg3 dropoffEvent:(id)arg4 preferredAppBundleID:(id)arg5;
- (bool)shouldPredictDropOffLocationGivenPickupLocation:(id)arg1 andDropOffLocation:(id)arg2;

@end

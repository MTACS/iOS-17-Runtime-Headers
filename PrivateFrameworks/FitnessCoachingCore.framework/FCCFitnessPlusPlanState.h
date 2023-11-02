
@interface FCCFitnessPlusPlanState : NSObject <FCCDataSerializable> {
    bool  _hasWorkoutScheduledToday;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasWorkoutScheduledToday;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (bool)hasWorkoutScheduledToday;
- (id)initWithHasWorkoutScheduledToday:(bool)arg1;
- (id)initWithTransportData:(id)arg1;
- (id)transportData;

@end

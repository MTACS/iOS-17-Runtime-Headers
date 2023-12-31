
@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol> {
    RTRoutineManager * _routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) RTRoutineManager *routineManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRoutineManager:(id)arg1;
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)routineManager;
- (void)setRoutineManager:(id)arg1;

@end

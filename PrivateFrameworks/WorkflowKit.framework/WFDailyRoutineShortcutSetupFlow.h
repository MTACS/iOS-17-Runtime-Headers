
@interface WFDailyRoutineShortcutSetupFlow : NSObject {
    WFDailyRoutineShortcutSetupLocation * _location;
    NSArray * _questions;
    NSString * _routineName;
    WFDailyRoutineShortcutSetupTriggerBuilder * _trigger;
}

@property (nonatomic, readonly) WFDailyRoutineShortcutSetupLocation *location;
@property (nonatomic, readonly, copy) NSArray *questions;
@property (nonatomic, readonly, copy) NSString *routineName;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupTriggerBuilder *trigger;

- (void).cxx_destruct;
- (id)initWithRoutineName:(id)arg1 questions:(id)arg2 trigger:(id)arg3 location:(id)arg4;
- (id)location;
- (id)questions;
- (id)routineName;
- (id)trigger;

@end

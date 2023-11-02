
@protocol CNUIContactSaveExecutor <NSObject>

@required

- (CNUIContactSaveResult *)executeSaveWithConfiguration:(CNUIContactSaveConfiguration *)arg1 saveDelegate:(id <CNUIContactSaveDelegate>)arg2;

@end

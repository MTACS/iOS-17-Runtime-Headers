
@interface CNUINullSaveExecutor : NSObject <CNUIContactSaveExecutor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;

@end

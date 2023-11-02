
@interface SWSetupManager : NSObject <SWSetupManager> {
    <SWLogger> * _logger;
    NSMutableOrderedSet * _tasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableOrderedSet *tasks;

- (void).cxx_destruct;
- (void)addTask:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (id)logger;
- (void)performTasks;
- (id)tasks;

@end

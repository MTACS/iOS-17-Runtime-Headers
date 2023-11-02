
@interface FSResourceManager : NSObject {
    NSMutableDictionary * _resourceTasks;
    NSMutableDictionary * _resources;
}

@property (retain) NSMutableDictionary *resourceTasks;
@property (retain) NSMutableDictionary *resources;

- (void).cxx_destruct;
- (void)addResource:(id)arg1;
- (void)addTaskUUID:(id)arg1 resource:(id)arg2;
- (id)getResource:(id)arg1;
- (id)getTaskUUIDs:(id)arg1;
- (id)init;
- (void)removeResource:(id)arg1;
- (void)removeTaskUUID:(id)arg1;
- (id)resourceTasks;
- (id)resources;
- (void)setResourceTasks:(id)arg1;
- (void)setResources:(id)arg1;
- (void)updateResource:(id)arg1;

@end

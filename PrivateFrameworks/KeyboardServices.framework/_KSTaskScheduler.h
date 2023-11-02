
@interface _KSTaskScheduler : NSObject {
    NSMutableDictionary * _allTasks;
}

@property (nonatomic, retain) NSMutableDictionary *allTasks;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allTasks;
- (id)init;
- (void)registerTask:(id)arg1;
- (void)setAllTasks:(id)arg1;
- (void)unregisterTask:(id)arg1;

@end

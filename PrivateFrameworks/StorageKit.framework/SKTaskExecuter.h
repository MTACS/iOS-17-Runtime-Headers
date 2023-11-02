
@interface SKTaskExecuter : NSObject <SKWaitable> {
    NSArray * _tasks;
}

@property (readonly) NSArray *tasks;

- (void).cxx_destruct;
- (id)initWithTasks:(id)arg1;
- (id)tasks;
- (bool)waitWithError:(id*)arg1;

@end

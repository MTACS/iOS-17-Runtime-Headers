
@interface SAExecutableCallTree : SACallTree {
    NSArray * _tasks;
}

@property (readonly) NSArray *tasks;

- (void).cxx_destruct;
- (id)tasks;

@end


@interface SATaskCallTree : SACallTree {
    SATask * _task;
}

@property (readonly) SATask *task;

- (void).cxx_destruct;
- (id)task;

@end


@interface HMDBackgroundSystemTask : NSObject <HMDBackgroundSystemTask> {
    BGSystemTask * _underlyingTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BGSystemTask *underlyingTask;

- (void).cxx_destruct;
- (id)initWithUnderlyingTask:(id)arg1;
- (void)setTaskCompleted;
- (id)underlyingTask;

@end

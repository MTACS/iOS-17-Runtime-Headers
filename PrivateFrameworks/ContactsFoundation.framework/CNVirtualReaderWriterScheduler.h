
@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {
    CNSuspendableSchedulerDecorator * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScheduler:(id)arg1;
- (id)performReaderBlock:(id /* block */)arg1;
- (void)performSynchronousReaderBlock:(id /* block */)arg1;
- (void)performSynchronousWriterBlock:(id /* block */)arg1;
- (id)performWriterBlock:(id /* block */)arg1;
- (void)resume;
- (id)scheduler;
- (void)suspend;

@end
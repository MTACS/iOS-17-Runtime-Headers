
@protocol CNSchedulerProvider <NSObject>

@required

- (<CNScheduler> *)backgroundScheduler;
- (<CNScheduler> *)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (<CNScheduler> *)immediateScheduler;
- (<CNScheduler> *)inlineScheduler;
- (<CNScheduler> *)mainThreadScheduler;
- (<CNReaderWriterScheduler> *)newReaderWriterSchedulerWithName:(NSString *)arg1;
- (<CNScheduler> *)newSerialSchedulerWithName:(NSString *)arg1;
- (<CNScheduler> *)newSynchronousSerialSchedulerWithName:(NSString *)arg1;

@end

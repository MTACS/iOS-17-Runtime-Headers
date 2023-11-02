
@protocol AFMemoryPressureListening <NSObject>

@required

- (void)memoryPressureObserver:(AFMemoryPressureObserver *)arg1 didChangeFromCondition:(long long)arg2 toCondition:(long long)arg3;

@end

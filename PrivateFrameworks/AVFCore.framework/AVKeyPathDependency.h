
@interface AVKeyPathDependency : NSObject {
    AVKVODispatcher * _KVODispatcher;
    AVTwoPartKeyPath * _dependencyKeyPath;
    NSString * _dependentKey;
    <AVCallbackCancellation> * _leafPropertyChangeNotifier;
    NSObject<OS_dispatch_queue> * _subObjectRegistrationQueue;
    AVWeakReference * _weakReferenceToObject;
}

+ (void)initialize;

- (void)_reactToSecondLevelPropertyChange:(id)arg1;
- (void)_reactToTopLevelPropertyChange:(id)arg1;
- (void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3;
- (void)initializationIsCompleteForObject:(id)arg1;

@end

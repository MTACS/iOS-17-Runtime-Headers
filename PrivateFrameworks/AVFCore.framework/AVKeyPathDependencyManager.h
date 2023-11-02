
@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {
    AVWeakObservableCallbackCancellationHelper * _callbackCancellationHelper;
    NSMutableSet * _keyPathDependencies;
    AVWeakReference * _weakReferenceToDependencyHost;
}

- (void)addCallbackToCancel:(id)arg1;
- (void)cancelAllCallbacks;
- (void)dealloc;
- (void)dependencyHostIsFullyInitialized;
- (id)initWithDependencyHost:(id)arg1;
- (void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2;

@end

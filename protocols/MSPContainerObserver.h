
@protocol MSPContainerObserver <NSObject>

@required

- (void)container:(MSPContainer *)arg1 didEditWithNewContents:(NSArray *)arg2 orderedEdits:(NSArray *)arg3 cause:(long long)arg4 context:(id <NSObject><NSCopying>)arg5;

@optional

- (void)containerDidEraseContents:(MSPContainer *)arg1 fromStorageTypes:(unsigned long long)arg2;
- (void)containerDidLoadFromPersister:(MSPContainer *)arg1;
- (void)containerWillEraseContents:(MSPContainer *)arg1;
- (void)containerWillEraseContents:(MSPContainer *)arg1 fromStorageTypes:(unsigned long long)arg2;
- (NSObject<OS_dispatch_queue> *)observationQueueForContainer:(MSPContainer *)arg1;

@end


@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler> {
    struct OpaqueFigReentrantMutex { } * _blockSerializationLock;
    NSArray * _blocks;
    struct OpaqueFigSimpleMutex { } * _ivarAccessLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)scheduleBlock:(id /* block */)arg1;

@end


@interface BWPhotonicEngineNodeSampleBufferAndInputQueue : NSObject {
    NSMutableArray * _sampleBufferAndInputQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sampleBufferAndInputQueueLock;
}

- (void)dealloc;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)newDequeuedSampleBufferAndInput;
- (id)newSampleBuffersAndInputsWithPredicate:(id)arg1;

@end

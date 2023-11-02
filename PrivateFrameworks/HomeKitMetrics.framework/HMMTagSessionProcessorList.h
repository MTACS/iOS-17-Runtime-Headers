
@interface HMMTagSessionProcessorList : NSObject <HMFActivityAssociating> {
    NSArray * _processors;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *processors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addProcessor:(id)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (id)objectForChildActivity;
- (id)processors;
- (void)removeProcessor:(id)arg1;

@end

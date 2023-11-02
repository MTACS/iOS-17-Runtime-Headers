
@interface RMStatusPublisherDelegate : NSObject {
    RMSharedLock * _fetchLock;
    Class  _publisherClass;
    NSObject<OS_dispatch_queue> * _publisherQueue;
}

@property (nonatomic, readonly) Class publisherClass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *publisherQueue;

+ (id)sharedDelegateWithPublisherClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_filterSupportedStatus:(id)arg1 store:(id)arg2 unsupported:(id)arg3;
- (void)fetchStatusForStatusKeys:(id)arg1 store:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPublisherClass:(Class)arg1;
- (Class)publisherClass;
- (id)publisherQueue;
- (void)setPublisherQueue:(id)arg1;

@end

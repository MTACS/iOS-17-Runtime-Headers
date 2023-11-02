
@interface ATXPOICategoryStream : NSObject

- (id)publisherForLastNEvents:(id)arg1;
- (id)sinkOnScheduler:(id)arg1 withCompletion:(id /* block */)arg2 receiveInput:(id /* block */)arg3;

@end


@interface AVOutputContextDestinationChangeInternal : NSObject {
    NSString * cancellationReason;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    long long  status;
}

@end

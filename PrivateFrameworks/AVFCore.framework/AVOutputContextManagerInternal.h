
@interface AVOutputContextManagerInternal : NSObject {
    <AVOutputContextManagerImpl> * impl;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
}

@end


@interface AVOutputContextInternal : NSObject {
    int  applicationPID;
    bool  applicationPIDWasSet;
    <AVOutputContextCommunicationChannelDelegate> * communicationChannelDelegate;
    <AVOutputContextImpl> * impl;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    unsigned long long  outputDeviceFeatures;
}

- (void).cxx_destruct;

@end


@interface FigVideoLayerInternal : NSObject {
    bool  isPresentationLayer;
    NSObject<OS_dispatch_queue> * notificationSerialQueue;
    struct OpaqueFigSimpleMutex { } * serializationMutex;
    bool  visible;
}

@end

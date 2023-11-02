
@interface VFXCore.NewBufferPool : _TtCs12_SwiftObject {
    void blockSize;
    void buffersBeingConsumedByGPU;
    void buffersUnused;
    void buffersUsedByCPU;
    void canBeConsumedByMultipleRenderer;
    void consumedFrame;
    void currentSmallBuffer;
    void device;
    void gpuConsumingCount;
    void heapsUnused;
    void heapsUsedByCPU;
    void isActive;
    void label;
    void resourceOptions;
    void smallBufferLock;
    void smallBufferPreferredSize;
    void storage;
    void storageLock;
}

@end

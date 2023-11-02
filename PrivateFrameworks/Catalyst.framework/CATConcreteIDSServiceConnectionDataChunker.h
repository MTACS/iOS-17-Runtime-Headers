
@interface CATConcreteIDSServiceConnectionDataChunker : NSObject <CATIDSServiceConnectionDataChunker> {
    long long  mMaxDataLength;
    unsigned long long  mNextDataNumber;
    unsigned long long  mNextSequenceNumber;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

- (void).cxx_destruct;
- (id)chunkDataIntoMessageContent:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 maxDataLength:(long long)arg2;

@end

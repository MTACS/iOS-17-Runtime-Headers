
@interface NWURLSessionRequestBodyInfo : NSObject {
    NSObject<OS_dispatch_data> * _data;
    NSURL * _fileURL;
    long long  _knownSize;
    NSObject<OS_dispatch_queue> * _queue;
    NSInputStream * _stream;
    unsigned long long  _streamOffset;
    bool  _streamUsed;
}

- (void).cxx_destruct;

@end

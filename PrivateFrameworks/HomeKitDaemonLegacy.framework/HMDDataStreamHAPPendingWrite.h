
@interface HMDDataStreamHAPPendingWrite : NSObject {
    unsigned long long  _bytesWritten;
    id /* block */  _completion;
    NSData * _data;
}

@property unsigned long long bytesWritten;
@property (readonly) id /* block */ completion;
@property (readonly, copy) NSData *data;

- (void).cxx_destruct;
- (unsigned long long)bytesWritten;
- (id /* block */)completion;
- (id)data;
- (id)initWithData:(id)arg1 completion:(id /* block */)arg2;
- (bool)isComplete;
- (id)popNextFrameUpToMaxLength:(unsigned long long)arg1;
- (void)setBytesWritten:(unsigned long long)arg1;

@end

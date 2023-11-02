
@interface NPTUploadDataStream : NSInputStream {
    <NSStreamDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * callBackQueue;
    unsigned long long  remainingLength;
    unsigned long long  status;
}

- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithLength:(unsigned long long)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end

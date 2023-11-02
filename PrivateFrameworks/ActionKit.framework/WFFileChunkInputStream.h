
@interface WFFileChunkInputStream : NSInputStream {
    NSInputStream * _inputStream;
    unsigned long long  _length;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) unsigned long long offset;

- (void).cxx_destruct;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (bool)_setCFClientFlags:(unsigned long long)arg1 callback:(int (*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)close;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)inputStream;
- (unsigned long long)length;
- (unsigned long long)offset;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;

@end

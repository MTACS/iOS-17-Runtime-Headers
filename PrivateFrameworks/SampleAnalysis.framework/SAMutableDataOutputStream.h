
@interface SAMutableDataOutputStream : SAOutputStream {
    NSMutableData * _outputData;
}

- (void).cxx_destruct;
- (int)appendData:(id)arg1;
- (bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

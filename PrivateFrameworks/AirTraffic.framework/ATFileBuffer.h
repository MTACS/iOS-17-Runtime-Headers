
@interface ATFileBuffer : NSObject {
    NSFileHandle * _bufferFileHandle;
    unsigned long long  _currentReadLocation;
    unsigned long long  _length;
}

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (id)init;
- (unsigned long long)length;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)rewind:(unsigned long long)arg1;
- (void)rewindData:(id)arg1;

@end

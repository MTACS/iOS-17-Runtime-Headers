
@protocol ASDManagedRingBuffer <ASDRingBuffer>

@required

- (bool)readerRunning;
- (void)startReader;
- (void)startWriter;
- (void)stopReader;
- (void)stopWriter;
- (bool)writerRunning;

@end

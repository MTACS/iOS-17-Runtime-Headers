
@interface BRKAccelerationFileWriter : BRKWriter <BRKAccelerationWriter> {
    NSOutputStream * _outputStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_close;
- (void)_lock_openWithDataCount:(unsigned long long)arg1;
- (void)_lock_writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (void)close;
- (void)openWithDataCount:(unsigned long long)arg1;
- (void)writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;

@end

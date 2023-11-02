
@interface BRKAccelerationBufferedFileWriter : BRKWriter <BRKAccelerationWriter> {
    NSMutableArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_close;
- (void)_lock_writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (void)close;
- (void)writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;

@end

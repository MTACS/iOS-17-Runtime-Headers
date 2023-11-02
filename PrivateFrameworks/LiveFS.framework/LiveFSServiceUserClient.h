
@interface LiveFSServiceUserClient : LiveFSUserClient {
    unsigned int  volumePort;
}

- (int)clearMetaBlocks:(int)arg1 ranges:(struct FSKit_Meta_BlockRange_s { long long x1; unsigned int x2; unsigned int x3; }*)arg2 rangesCount:(int)arg3 wait:(int)arg4;
- (int)closeFileDescriptorForKernel:(int)arg1;
- (unsigned int)createVolumePort;
- (int)flushMeta:(int)arg1 wait:(int)arg2;
- (int)flushMetaBlocks:(int)arg1 ranges:(struct FSKit_Meta_BlockRange_s { long long x1; unsigned int x2; unsigned int x3; }*)arg2 rangesCount:(int)arg3 wait:(int)arg4;
- (unsigned int)getVolumePort;
- (id)init;
- (int)openFileDescriptorForKernel:(int)arg1 flags:(int)arg2;
- (int)purgeMetaBlocks:(int)arg1 ranges:(struct FSKit_Meta_BlockRange_s { long long x1; unsigned int x2; unsigned int x3; }*)arg2 rangesCount:(int)arg3;
- (int)readMeta:(int)arg1 buffer:(void*)arg2 offset:(long long)arg3 length:(unsigned long long)arg4;
- (int)readMetaWithRA:(int)arg1 buffer:(void*)arg2 offset:(long long)arg3 length:(unsigned long long)arg4 raList:(struct FSKit_Meta_Readahead_s { long long x1; unsigned long long x2; }*)arg5 raListCount:(int)arg6;
- (int)writeMeta:(int)arg1 buffer:(const void*)arg2 offset:(long long)arg3 length:(unsigned long long)arg4;
- (int)writeMetaAsync:(int)arg1 buffer:(const void*)arg2 offset:(long long)arg3 length:(unsigned long long)arg4;
- (int)writeMetaDelayed:(int)arg1 buffer:(const void*)arg2 offset:(long long)arg3 length:(unsigned long long)arg4;
- (int)writeMetaSubBlock:(int)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 subBlockBuffer:(const void*)arg4 subBlockOffset:(long long)arg5 subBlockLength:(unsigned long long)arg6;

@end


@interface OISFUZipRecordInputStream : NSObject {
    const char * mBuffer;
    long long  mBufferEnd;
    long long  mBufferStart;
    <OISFUBufferedInputStream> * mInput;
}

- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;

@end

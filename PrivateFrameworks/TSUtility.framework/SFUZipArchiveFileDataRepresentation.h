
@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    int  mFd;
    SFUFileDataRepresentation * mFileRepresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (long long)dataLength;
- (void)dealloc;
- (bool)hasSameLocationAs:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)inputStream;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (bool)isEncrypted;
- (bool)isReadable;
- (id)path;

@end

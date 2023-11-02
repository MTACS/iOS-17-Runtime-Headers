
@interface HDAttachmentFileHandleReader : NSObject <HDAttachmentReader> {
    NSFileHandle * _fileHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initAdoptingFileHandle:(id)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 error:(id*)arg3;

@end

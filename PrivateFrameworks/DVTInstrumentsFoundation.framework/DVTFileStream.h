
@interface DVTFileStream : NSObject <DVTInputStream> {
    unsigned long long  _currentRead;
    NSFileHandle * _fileHandle;
    unsigned long long  _fileSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSFileHandle *file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsPeek;

- (void).cxx_destruct;
- (void)_updateFileSize;
- (id)file;
- (bool)hasData;
- (id)initWithFD:(int)arg1;
- (id)initWithURL:(id)arg1;
- (id)peek:(unsigned long long)arg1 error:(id*)arg2;
- (id)read:(unsigned long long)arg1 error:(id*)arg2;
- (id)readToEnd:(id*)arg1;
- (bool)supportsPeek;

@end

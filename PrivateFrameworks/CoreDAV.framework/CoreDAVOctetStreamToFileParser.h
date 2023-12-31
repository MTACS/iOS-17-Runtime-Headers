
@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
    NSFileHandle * _fileHandle;
}

@property (nonatomic, retain) NSFileHandle *fileHandle;

- (void).cxx_destruct;
- (id)fileHandle;
- (id)initWithFileHandle:(id)arg1;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (void)setFileHandle:(id)arg1;

@end


@interface ARArchive : NSObject {
    NSMutableDictionary * _dataByPath;
}

@property (nonatomic, readonly, copy) NSArray *filePaths;

- (void).cxx_destruct;
- (struct archive { }*)_createArchiveForReading;
- (bool)_loadArchiveFromMemory:(id)arg1 error:(id*)arg2;
- (bool)_loadArchiveFromURL:(id)arg1 error:(id*)arg2;
- (bool)_readDataForEntry:(struct archive_entry { }*)arg1 archive:(struct archive { }*)arg2;
- (bool)_readDataFromArchive:(struct archive { }*)arg1;
- (bool)_writeToArchive:(struct archive { }*)arg1;
- (void)addData:(id)arg1 withFilename:(id)arg2 extension:(id)arg3;
- (void)addData:(id)arg1 withPath:(id)arg2;
- (id)dataForResource:(id)arg1 withExtension:(id)arg2;
- (id)dataForResourceAtPath:(id)arg1;
- (id)dataRepresentation;
- (id)filePaths;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end

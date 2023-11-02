
@interface DSMutableArchive : NSObject {
    NSMutableData * _dataBuffer;
    long long  _format;
    NSMutableArray * _tableOfContents;
}

@property (nonatomic, retain) NSMutableData *dataBuffer;
@property (nonatomic) long long format;
@property (nonatomic, retain) NSMutableArray *tableOfContents;

+ (id)archive;
+ (bool)extractArchive:(id)arg1 toDirectory:(id)arg2;
+ (bool)extractEntry:(struct archive { }*)arg1 toArchive:(struct archive { }*)arg2;

- (void).cxx_destruct;
- (bool)_addDirectoryToContents:(id)arg1 searchQueue:(id)arg2 flatten:(bool)arg3 error:(id*)arg4;
- (bool)_addFile:(id)arg1 archive:(struct archive { }*)arg2 error:(id*)arg3;
- (bool)_addPathToContents:(id)arg1 searchQueue:(id)arg2 flatten:(bool)arg3 error:(id*)arg4;
- (void)_setFormatOnArchive:(struct archive { }*)arg1;
- (bool)_writeArchive:(struct archive { }*)arg1 error:(id*)arg2;
- (bool)addURL:(id)arg1 error:(id*)arg2;
- (bool)addURL:(id)arg1 prefix:(id)arg2 error:(id*)arg3;
- (bool)addURL:(id)arg1 prefix:(id)arg2 flatten:(bool)arg3 error:(id*)arg4;
- (id)archiveAsDataWithError:(id*)arg1;
- (bool)archiveAsFile:(id)arg1 error:(id*)arg2;
- (bool)archiveAsFileUsingDescriptor:(int)arg1 error:(id*)arg2;
- (id)archiveAsTempDirectoryWithName:(id)arg1 error:(id*)arg2;
- (id)archiveAsTempFileWithTemplate:(id)arg1 directory:(id)arg2 suffix:(id)arg3 error:(id*)arg4;
- (id)archiveAsTempFileWithTemplate:(id)arg1 error:(id*)arg2;
- (id)archiveAsTempFileWithTemplate:(id)arg1 suffix:(id)arg2 error:(id*)arg3;
- (id)dataBuffer;
- (long long)format;
- (id)init;
- (void)setDataBuffer:(id)arg1;
- (void)setFormat:(long long)arg1;
- (void)setTableOfContents:(id)arg1;
- (id)tableOfContents;

@end


@interface APConfigurationDecompressor : NSObject {
    NSFileManager * _filemanager;
}

@property (nonatomic, retain) NSFileManager *filemanager;

- (void).cxx_destruct;
- (id)dataForObject:(id)arg1 inLocation:(unsigned long long)arg2 andLength:(unsigned long long)arg3;
- (long long)decompressTarAtPath:(id)arg1 toPath:(id)arg2;
- (id)filemanager;
- (id)init;
- (id)nameForObject:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)removeFileAtPath:(id)arg1;
- (void)setFilemanager:(id)arg1;
- (unsigned long long)sizeForFileAtPath:(id)arg1;
- (unsigned long long)sizeForObject:(id)arg1 atOffset:(unsigned long long)arg2;
- (BOOL)typeForObject:(id)arg1 atOffset:(unsigned long long)arg2;
- (bool)untarFileAtPath:(id)arg1;
- (bool)unzipContentsOfFileAtPath:(id)arg1 toPath:(id)arg2;
- (id)unzipData:(id)arg1;
- (void)writeFileDataForFile:(id)arg1 atLocation:(unsigned long long)arg2 withLength:(unsigned long long)arg3 atPath:(id)arg4;

@end

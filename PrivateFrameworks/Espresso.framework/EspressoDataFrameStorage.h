
@interface EspressoDataFrameStorage : NSObject {
    NSString * _baseFilename;
    NSMutableArray * _dataFrames;
    NSMutableDictionary * _mappedFiles;
}

@property (retain) NSString *baseFilename;
@property (retain) NSMutableArray *dataFrames;
@property (retain) NSMutableDictionary *mappedFiles;

+ (id)dataFrameStorageFromPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)baseFilename;
- (id)dataFrameAtIndex:(unsigned long long)arg1;
- (id)dataFrames;
- (id)mappedFiles;
- (unsigned long long)numberOfDataFrames;
- (void)setBaseFilename:(id)arg1;
- (void)setDataFrames:(id)arg1;
- (void)setMappedFiles:(id)arg1;

@end

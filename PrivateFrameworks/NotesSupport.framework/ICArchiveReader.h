
@interface ICArchiveReader : NSObject {
    struct archive { } * _archive;
    NSString * _destinationPath;
    bool  _overwrite;
    bool  _skipsInvisibleHeaders;
    NSString * _sourcePath;
    bool  _writesTemporaryFilesInsideDestination;
}

@property (nonatomic, copy) NSString *destinationPath;
@property (nonatomic) bool overwrite;
@property (nonatomic) bool skipsInvisibleHeaders;
@property (nonatomic, copy) NSString *sourcePath;
@property (nonatomic) bool writesTemporaryFilesInsideDestination;

- (void).cxx_destruct;
- (id)destinationPath;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (bool)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id*)arg3 error:(id*)arg4;
- (bool)overwrite;
- (void)setDestinationPath:(id)arg1;
- (void)setOverwrite:(bool)arg1;
- (void)setSkipsInvisibleHeaders:(bool)arg1;
- (void)setSourcePath:(id)arg1;
- (void)setWritesTemporaryFilesInsideDestination:(bool)arg1;
- (bool)skipsInvisibleHeaders;
- (id)sourcePath;
- (id)temporaryDirectoryWithError:(id*)arg1;
- (bool)unarchiveResultURLs:(id*)arg1 error:(id*)arg2;
- (bool)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3;
- (bool)writesTemporaryFilesInsideDestination;

@end

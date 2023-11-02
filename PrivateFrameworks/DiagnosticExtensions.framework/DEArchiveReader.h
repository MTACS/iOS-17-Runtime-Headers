
@interface DEArchiveReader : NSObject {
    struct archive { } * _archive;
}

- (void)closeArchive;
- (id)initWithURL:(id)arg1;
- (id)listContainedPaths;

@end


@interface FileArchiver : NSObject {
    struct archive { } * _archive;
}

+ (id)archiveWithPath:(id)arg1;
+ (id)archiveWithPath:(id)arg1 destinationDir:(id)arg2 nameMatches:(id)arg3 maxAge:(double)arg4 allowDirectories:(bool)arg5;
+ (id)archiveWithPaths:(id)arg1 destinationDir:(id)arg2 deleteSource:(bool)arg3;
+ (id)matchFilesInDirectory:(id)arg1 filenamePredicate:(id)arg2 newerThan:(id)arg3 allowDirectories:(bool)arg4;

- (int)addDirectoryToArchive:(id)arg1 withDirName:(id)arg2;
- (int)addFileToArchive:(id)arg1 withFileName:(id)arg2;
- (int)closeArchive;
- (id)initWithPath:(id)arg1 shouldCompress:(bool)arg2;
- (void)moveDirectoryToArchive:(id)arg1 withDirName:(id)arg2;

@end

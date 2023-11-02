
@interface AXPhoenixDataArchiver : NSObject {
    struct archive { } * _archiver;
}

@property (nonatomic) struct archive { }*archiver;

- (void)addDirectoryToArchive:(id)arg1 withDirName:(id)arg2;
- (void)addFileToArchive:(id)arg1 withFileName:(id)arg2;
- (struct archive { }*)archiver;
- (void)closeArchive;
- (id)initWithPath:(id)arg1;
- (void)setArchiver:(struct archive { }*)arg1;

@end

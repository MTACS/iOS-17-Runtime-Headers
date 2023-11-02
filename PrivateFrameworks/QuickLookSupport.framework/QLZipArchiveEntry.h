
@interface QLZipArchiveEntry : NSObject {
    QLZipArchive * _archive;
    NSData * _data;
    struct archive_entry { } * _entry;
    NSError * _error;
}

@property QLZipArchive *archive;
@property (retain) NSData *data;
@property struct archive_entry { }*entry;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)archive;
- (id)data;
- (struct archive_entry { }*)entry;
- (id)readDataWithError:(id*)arg1;
- (void)setArchive:(id)arg1;
- (void)setData:(id)arg1;
- (void)setEntry:(struct archive_entry { }*)arg1;
- (id)url;

@end

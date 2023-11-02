
@interface WFArchiveEntry : NSObject {
    id /* block */  _dataProvider;
    struct archive_entry { } * _entry;
}

@property (nonatomic, readonly) id /* block */ dataProvider;
@property (nonatomic, readonly) struct archive_entry { }*entry;

+ (id)archiveEntriesWithTopLevelFileRepresentation:(id)arg1 usedFilenames:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)dataProvider;
- (void)dealloc;
- (struct archive_entry { }*)entry;
- (id)initWithDirectoryName:(id)arg1;
- (id)initWithFilename:(id)arg1 fileRepresentation:(id)arg2;
- (id)initWithFilename:(id)arg1 fileType:(unsigned short)arg2 filePermission:(unsigned short)arg3 fileSize:(long long)arg4 modificationDate:(id)arg5 creationDate:(id)arg6 dataProvider:(id /* block */)arg7;

@end

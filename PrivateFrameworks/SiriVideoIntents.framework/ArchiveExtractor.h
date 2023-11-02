
@interface ArchiveExtractor : NSObject

- (bool)copyDataFromReadArchive:(struct archive { }*)arg1 toWriteDiskArchive:(struct archive { }*)arg2;
- (struct archive { }*)createReadArchive;
- (struct archive { }*)createWriteDiskArchive;
- (bool)extractArchiveAtURL:(id)arg1 toDestinationDirectoryURL:(id)arg2;
- (bool)performExtractionForArchive:(struct archive { }*)arg1 toDestinationDirectory:(id)arg2;
- (bool)unarchiveData:(id)arg1 toDestinationDirectory:(id)arg2;

@end

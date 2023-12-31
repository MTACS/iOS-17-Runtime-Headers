
@interface _UIArchiveListingController : NSObject {
    long long  _appleDoubleIdentificationType;
    NSString * _archivePath;
    _UILibArchiveStreamingReader * _archiveReader;
    bool  _excludeDotFilesFromResults;
    bool  _isValidArchive;
}

@property (nonatomic) long long appleDoubleIdentificationType;
@property (nonatomic, readonly) NSString *archivePath;
@property (nonatomic) bool excludeDotFilesFromResults;

- (void).cxx_destruct;
- (bool)_shouldVisitItem:(id)arg1;
- (long long)appleDoubleIdentificationType;
- (id)archivePath;
- (void)dealloc;
- (bool)determineIsReadableArchive;
- (bool)enumerateLogicalItemsWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)excludeDotFilesFromResults;
- (id)initWithArchivePath:(id)arg1;
- (void)setAppleDoubleIdentificationType:(long long)arg1;
- (void)setExcludeDotFilesFromResults:(bool)arg1;

@end

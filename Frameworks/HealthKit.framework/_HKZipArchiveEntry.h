
@interface _HKZipArchiveEntry : NSObject {
    NSData * _data;
    bool  _didReadEntryData;
    struct archive_entry { } * _entry;
    long long  _enumerationCount;
    _HKZipArchiveExtractor * _extractor;
    NSString * _pathname;
}

@property (nonatomic, readonly) bool didReadEntryData;
@property (nonatomic, readonly, copy) NSString *pathname;

+ (bool)_assignReadError:(id*)arg1 archive:(struct archive { }*)arg2;

- (void).cxx_destruct;
- (bool)_enumerateLinesInCurrentEntryWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)_getDataWithBufferingWithMaxSizeBytes:(unsigned long long)arg1 error:(id*)arg2;
- (id)_getDataWithSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_isExtractorStateValidWithError:(id*)arg1;
- (id)dataWithError:(id*)arg1;
- (id)dataWithMaxSizeBytes:(unsigned long long)arg1 error:(id*)arg2;
- (bool)didReadEntryData;
- (bool)enumerateLinesWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)initWithExtractor:(id)arg1 currentEntry:(struct archive_entry { }*)arg2 pathname:(id)arg3;
- (id)pathname;

@end

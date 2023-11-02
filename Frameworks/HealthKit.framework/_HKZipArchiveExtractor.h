
@interface _HKZipArchiveExtractor : NSObject {
    struct archive { } * _archive;
    NSData * _archiveData;
    long long  _enumerationCount;
    NSFileHandle * _fileHandle;
    bool  _isEnumeratingEntries;
    NSNumber * _numberOfEntries;
    NSString * _pathname;
}

@property (nonatomic, readonly) struct archive { }*archive;
@property (nonatomic, readonly) long long enumerationCount;

- (void).cxx_destruct;
- (id)_initWithData:(id)arg1 fileHandle:(id)arg2 path:(id)arg3;
- (struct archive { }*)archive;
- (id)description;
- (bool)enumerateEntriesWithError:(id*)arg1 block:(id /* block */)arg2;
- (long long)enumerationCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithFileHandle:(id)arg1;
- (id)initWithPathname:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)numberOfEntriesWithError:(id*)arg1;

@end

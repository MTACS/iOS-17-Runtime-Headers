
@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider {
    NSString * _entryName;
    bool  _isCompressed;
    OISFUZipArchiveOutputStream * _outputStream;
}

@property (nonatomic, readonly, copy) NSString *entryName;
@property (nonatomic, readonly) bool isCompressed;
@property (nonatomic, readonly) OISFUZipArchiveOutputStream *outputStream;

- (void).cxx_destruct;
- (id)entryName;
- (id)initWithEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(bool)arg3;
- (bool)isCompressed;
- (id)outputStream;
- (bool)setUp;

@end

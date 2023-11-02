
@interface JPReader : NSObject {
    struct JetPackReader { } * _backing;
    id /* block */  _dataSegmentFound;
    id /* block */  _fileEntryFound;
    id /* block */  _keyForIdentifier;
}

@property (nonatomic) struct JetPackReader { }*backing;
@property (nonatomic, copy) id /* block */ dataSegmentFound;
@property (nonatomic, copy) id /* block */ fileEntryFound;
@property (nonatomic, copy) id /* block */ keyForIdentifier;

- (void).cxx_destruct;
- (struct JetPackReader { }*)backing;
- (id)convertError;
- (id /* block */)dataSegmentFound;
- (void)dealloc;
- (id /* block */)fileEntryFound;
- (id)init;
- (id /* block */)keyForIdentifier;
- (bool)processStream:(id)arg1 signatureVerifier:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)setBacking:(struct JetPackReader { }*)arg1;
- (void)setDataSegmentFound:(id /* block */)arg1;
- (void)setFileEntryFound:(id /* block */)arg1;
- (void)setKeyForIdentifier:(id /* block */)arg1;

@end

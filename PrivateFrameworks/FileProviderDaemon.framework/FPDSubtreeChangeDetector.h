
@interface FPDSubtreeChangeDetector : NSObject {
    int  _fd;
    unsigned long long  _fileID;
    unsigned long long  _genCount;
    NSString * _path;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initAtPath:(id)arg1 error:(id*)arg2;
- (bool)maintainDirstatWithError:(id*)arg1;
- (unsigned long long)retrieveDirstatGenCountWithError:(id*)arg1;
- (unsigned long long)retrieveFileIDWithError:(id*)arg1;
- (id)verifyTreeIdentityWithError:(id*)arg1;

@end

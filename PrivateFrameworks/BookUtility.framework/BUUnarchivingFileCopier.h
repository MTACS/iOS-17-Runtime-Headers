
@interface BUUnarchivingFileCopier : NSObject <BUFileCopier> {
    <BUFileCopierDelegate> * _delegate;
    BUZipFileArchive * _zipArchive;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BUFileCopierDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BUZipFileArchive *zipArchive;

- (void).cxx_destruct;
- (bool)copyToURL:(id)arg1 error:(id*)arg2;
- (bool)countTotalFileSize:(unsigned long long*)arg1 totalFileCount:(unsigned long long*)arg2;
- (id)delegate;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setZipArchive:(id)arg1;
- (id)zipArchive;

@end


@interface GEOAnalyticsDataFile : NSObject {
    int  _fd;
    NSString * _filePath;
    bool  _forWrite;
    struct { 
        unsigned int header_magic; 
        unsigned int header_len; 
    }  _hdr;
    struct iovec { 
        void *iov_base; 
        unsigned long long iov_len; 
    }  _iov;
}

- (void).cxx_destruct;
- (void)close;
- (void)commonInitWithMagic:(unsigned int)arg1;
- (void)dealloc;
- (id)initForReadWithFileMagic:(unsigned int)arg1 fileDescriptor:(int)arg2;
- (id)initForReadWithFileMagic:(unsigned int)arg1 filePath:(id)arg2;
- (id)initForWriteWithFileMagic:(unsigned int)arg1 filePath:(id)arg2;
- (bool)prepareFileWithFilePath:(id)arg1 isForWrite:(bool)arg2;
- (int)unlinkAndReturnOpenFileDescriptor;
- (bool)unsafe_readAnalyticDataWithVisitorBlock:(id /* block */)arg1;
- (bool)writeAnalyticData:(id)arg1;

@end

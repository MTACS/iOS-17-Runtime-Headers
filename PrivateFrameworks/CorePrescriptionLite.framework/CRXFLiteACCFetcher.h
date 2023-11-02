
@interface CRXFLiteACCFetcher : NSObject {
    CRXFCalibrationDataDownloader * _downloader;
}

- (void).cxx_destruct;
- (void)fetchACCsForSerialNumbers:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithServerEnvironment:(unsigned long long)arg1 timeout:(double)arg2;

@end

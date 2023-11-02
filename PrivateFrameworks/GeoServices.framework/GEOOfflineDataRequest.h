
@interface GEOOfflineDataRequest : NSObject {
    unsigned long long  _expectedSizeInBytes;
    GEOOfflineDataBatchKey * _key;
    NSURL * _url;
    unsigned long long  _version;
}

- (void).cxx_destruct;

@end
